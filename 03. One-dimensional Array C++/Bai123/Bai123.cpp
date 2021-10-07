#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktDoiXung(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	if (ktDoiXung(b, k) != 1)
		cout << "\nMang gom cac gia tri khong doi xung";
	else
		cout << "\nMang gom cac gia tri doi xung";
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
int ktDoiXung(int a[], int n)
{
	int flag = 1;
	int d = 0;
	int c = n - 1;
	while (d < c)
	{
		if (a[d] != a[c])
			flag = 0;
		d++;
		c--;
	}
	return flag;
}