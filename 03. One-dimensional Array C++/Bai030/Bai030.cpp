#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void LietKe(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	LietKe(b, k);
	return 1;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + rand() / (RAND_MAX / (100.0 - (-100.0)));
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << fixed << setprecision(3) << a[i] << setw(10);
}
void LietKe(float a[], int n)
{
	cout << "\nCac cap gia tri (x,y) duoc tao tu cac gia tri trong mang la: ";
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i != j)
			{
				cout << "\n(" << a[i] << ", ";
				cout << a[j] << ")" << " " << setw(5);
			}
}