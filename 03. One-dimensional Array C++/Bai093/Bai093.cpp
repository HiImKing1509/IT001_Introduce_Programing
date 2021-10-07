#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktDang2m(int);
int TimGiaTri(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	if (TimGiaTri(b, k) == 0)
		cout << "\nMang khong co gia tri dang 2^m";
	else
		cout << "\nGia tri co dang 2^m dau tien trong mang la: " << TimGiaTri(b, k);
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
bool ktDang2m(int n)
{
	if (n < 1)
		return false;
	bool flag = true;
	int t = abs(n);
	while (t > 1)
	{
		int du = t % 2;
		if (du != 0)
			flag = false;
		t = t / 2;
	}
	return flag;
}
int TimGiaTri(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktDang2m(a[i]))
			return a[i];
	return 0;
}