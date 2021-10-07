#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int*, int&);
void Xuat(int*, int);
bool ktToanLe(int);
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
bool ktToanLe(int k)
{
	int dv;
	for (int t = abs(k); t != 0; t /= 10)
	{
		dv = t % 10;
		if (dv % 2 == 0)
			return false;
	}
	return true;
}
void LietKe(int* a, int n)
{
	cout << "\nCac gia tri co toan chu so le trong mang: ";
	for (int i = 0; i < n; i++)
		if (ktToanLe(a[i]))
			cout << a[i] << setw(6);
}