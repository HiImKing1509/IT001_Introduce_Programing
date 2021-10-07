#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int*, int&);
void Xuat(int*, int);
bool ktDang3m(int);
void LietKe(int*, int);

int main()
{
	int* b;
	int k;
	cout << "Nhap n: ";
	cin >> k;

	b = new int[k];
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	LietKe(b, k);
	delete[]b;
	return 1;
}
void Nhap(int* a, int& n)
{
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (200 + 1) - 100;
	}
}
void Xuat(int* a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(6);
}
bool ktDang3m(int k)
{
	if (k < 1)
		return false;
	int du;
	for (int t = k; t > 1; t /= 3)
	{
		du = t % 3;
		if (du != 0)
			return false;
	}
	return true;
}
void LietKe(int* a, int n)
{
	cout << "\nCac gia tri co dang 3^m trong mang: ";
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ktDang3m(a[i]))
		{
			cout << a[i] << setw(6);
			dem++;
		}
	if (dem == 0)
		cout << "Khong co";
}