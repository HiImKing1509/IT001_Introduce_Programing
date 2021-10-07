#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
int Daytoanduong(float[], int, int);
void LietkeDayToanduong(float[], int, int);
int main()
{
	float a[100];
	float b[100];
	int n, m;
	Nhap(a, n);
	cout << "Mang ban dau la: ";
	Xuat(a, n);
	LietkeDayToanduong(a, n, b, m);
	cout << "\nMang toan gia tri am la: ";
	Xuat(b, m);
	return 1;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (200 + 1) - 100;
	}


}
void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(10) << fixed << setprecision(2) << a[n - 1];

}
int Daytoanduong(float a[], int n, int i)
{
	int j = i;
	while (j < n && a[j]>0)
		j++;
	return j - i;
}
void LietkeDayToanduong(float a[], int n, int m)
{
	if (n == 0)
	{
		int kq = Daytoanduong(a, m, 0);
			if()
	}
}
