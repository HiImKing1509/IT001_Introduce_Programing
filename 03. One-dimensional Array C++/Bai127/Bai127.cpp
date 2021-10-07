#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktCSC(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	if (ktCSC(b, k) == 0)
		cout << "\nCac phan tu trong mang khong lap thanh cap so cong";
	else
		cout << "\nCac phan tu trong mang lap thanh cap so cong";
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
		cout << a[i] << setw(6);
}
int ktCSC(int a[], int n)
{
	if (n <= 1)
		return 0;
	int flag = 1;
	for (int i = 0; i < n - 1; i++)
		if ((a[i] - a[i + 1]) != (a[0] - a[1]))
			flag = 0;
	return flag;
}