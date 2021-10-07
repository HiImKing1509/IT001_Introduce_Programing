#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void DuongtangAmgiam(float[], int);
int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau la: ";
	Xuat(a, n);
	DuongtangAmgiam(a, n);
	cout << "\nMang toan gia tri am la: ";
	Xuat(a,n);
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
void DuongtangAmgiam(float a[], int n)
{
	if (n == 0 || n == 1)
		return;
	for (int i = 0;i < n;i++)
	{
		if (a[i] > 0 && a[n - 1] > 0 && a[i] > a[n - 1])
			swap(a[i], a[n - 1]);
	}
	for (int i = 0;i < n;i++)
	{
		if (a[i] < 0 && a[n - 1] < 0 && a[i] < a[n - 1])
			swap(a[i], a[n - 1]);
	}
	DuongtangAmgiam(a, n - 1);
}