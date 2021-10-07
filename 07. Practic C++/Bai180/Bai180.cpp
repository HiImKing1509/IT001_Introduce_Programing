#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
int DayTang(float[], int, int);
void LietKeTang(float[], int, int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau la: ";
	Xuat(b, k);
	cout << "\n\nCac day con tang la: " << endl;

	LietKeTang(b, k, k);
	return 1;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + rand() / (RAND_MAX / (200.0));
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(9) << fixed << setprecision(3) << a[i];
	}
}
int DayTang(float a[], int n, int i)
{
	int j = i;
	while (j < n && a[j] < a[j + 1])
		j++;
	return j - i;
}
void LietKeTang(float a[], int n, int m)
{
	if (n == 0)
	{
		int kq = DayTang(a, m, 0);
		if (kq > 1)
		{
			for (int i = 0; i < kq; i++)
				cout << a[i] << "   ";
			cout << endl;
		}
		return;
	}
	LietKeTang(a, n - 1, m);
	if (DayTang(a, m, n - 1) > 0)
	{
		float s = 0;
		for (int i = n - 1; i < DayTang(a, m, n - 1) + n; i++)
		{
			cout << a[i] << "   ";
			s = s + a[i];
		}
		cout << endl;
		cout << "Tong: " << s;
		cout << "\n\n";
	}
	return;
}
