#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int&);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
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
void LietKe(int a[], int& n)
{
	cout << endl;
	cout << "\nCac gia tri chan trong mang: ";
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			cout << a[i] << " ";
	cout << endl;
	cout << "\nCac gia tri le trong mang: ";
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0)
			cout << a[i] << " ";
}