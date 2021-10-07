#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float*, int&);
void Xuat(float*, int);
float ktLonNhat(float*, int);
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
float ktLonNhat(float* a, int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] > lc)
			lc = a[i];
	return lc;

}
void LietKe(float* a, int n)
{
	float lc = ktLonNhat(a, n);
	cout << "\nVi tri gia tri lon nhat trong mang: ";
	for (int i = 0; i < n; i++)
		if (a[i] == lc)
			cout << i << setw(5);
}