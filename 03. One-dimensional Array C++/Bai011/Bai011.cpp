#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktDang3m(int);
void LietKe(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	ktDang3m(k);
	LietKe(b, k);
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
bool ktDang3m(int n)
{
	if (n < 1)
		return false;
	bool flag = true;
	int t = n;
	while (t > 1)
	{
		int du = t % 3;
		if (du != 0)
			flag = false;
		t = t / 3;
	}
	return flag;
}
void LietKe(int a[], int n)
{
	int dem = 0;
	cout << "\nCac gia tri co dang 3^m trong mang: ";
	for (int i = 0; i < n; i++)
		if (ktDang3m(a[i]))
		{
			dem = dem + 1;
			cout << a[i] << " " << setw(6);
		}
	if (dem == 0)
		cout << "Khong co ";
}
