#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float*, int&);
void Xuat(float*, int);
void LietKe(float*, int);

int main()
{
	float* b;
	int k;
	cout << "Nhap n: ";
	cin >> k;

	b = new float[k];
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	LietKe(b, k);
	delete[]b;
	return 1;
}
void Nhap(float* a, int& n)
{
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + rand() / (RAND_MAX / (100.0 - (-100.0)));
	}
}
void Xuat(float* a, int n)
{
	for (int i = 0; i < n; i++)
		cout << fixed << setprecision(3) << a[i] << setw(10);
}
void LietKe(float* a, int n)
{
	cout << "\nCac gia tri am trong mang: ";
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
			cout << fixed << setprecision(3) << a[i] << setw(10);
}