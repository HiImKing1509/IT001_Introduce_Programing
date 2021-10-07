#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void LietKe(float[], int,float,float);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "\ncac phan tu cua mang: ";
	Xuat(b, k);
	cout << endl;
	float x, y;
	cout << "Nhap doan can xet: ";
	cin >> x >> y;
	cout << endl;
	cout << "Cac gia tri thoa man: ";
	LietKe(b, k,x,y);
	return 1;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + rand() / (RAND_MAX / (200.0));
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(9) << fixed << setprecision(3) << a[i];
	}
}
void LietKe(float a[], int n,float x,float y)
{
	if (n == 0)
		return;
	LietKe(a, n - 1,x,y);
	if (a[n - 1] <= y && a[n-1]>=x)
		cout << setw(10) << setprecision(3) << a[n - 1];

}
