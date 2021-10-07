#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktToanLe(int);
void LietKe(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	ktToanLe(k);
	LietKe(b, k);

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
bool ktToanLe(int n)
{
	int flag = true;
	int t = abs(n);
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = false;
		t = t / 10;
	}
	return flag;
}
void LietKe(int a[], int n)
{
	cout << "\nCac gia tri co toan chu so le trong mang: ";
	for (int i = 0; i < n; i++)
		if (ktToanLe(a[i]))
			cout << a[i] << " " << setw(6);
}

