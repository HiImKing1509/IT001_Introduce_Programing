#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int DemChan(int[], int);
bool ChuSoDau(int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "\ncac phan tu cua mang: ";
	Xuat(b, k);
	cout << endl;
	cout << "so luong cac gia tri thoa man: ";
	int kq = DemChan(b, k);
	cout << kq;
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (200 + 1) - 100;
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(6) << a[i];
	}
}
int DemChan(int a[], int n)
{
	if (n == 0)
		return 0;
	int dem = DemChan(a, n - 1);
	if (a[n-1]%2==0)
		dem++;
	return dem;
}
