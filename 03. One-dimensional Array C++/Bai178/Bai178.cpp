#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int ktCon(float[], int, int, int);
float TongCon(float[], int, int, int);
void LietKe(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	cout << "\nCac mang con tang trong mang ban dau: " << endl;
	LietKe(b, k);
	return 1;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + rand() / (RAND_MAX / (100.0 - (-100.0)));
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << fixed << setprecision(3) << a[i] << setw(10);
}
int ktCon(float a[], int n, int vt, int l)
{
	int flag = 1;
	for (int i = 0; i < l - 1; i++)
		if (a[vt + i] > a[vt + i + 1])
			flag = 0;
	return flag;
}
float TongCon(float a[], int n, int vt, int l)
{
	float s = 0;
	for (int i = 0; i < l; i++)
		s = s + a[vt + i];
	return s;
}
void LietKe(float a[], int n)
{
	int thu = 1;
	for (int l = 1; l <= n; l++)
	{
		for (int vt = 0; vt < n; vt++)
		{
			if (ktCon(a, n, vt, l) == 1)
			{
				cout << "Mang thu " << thu << ": ";
				for (int i = 0; i < l; i++)
					cout << " " << a[vt + i] << setw(3);
				cout << endl << "Tong la: ";
				cout << TongCon(a, n, vt, l);
				thu++;
				cout << "\n\n";
			}
		}
	}
}