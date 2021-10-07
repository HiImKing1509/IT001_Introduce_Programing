#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ViTriLonNhat(int[], int);
int TimChuSo(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	cout << "\nChu so xuat hien nhieu nhat trong mang: " << TimChuSo(b, k);
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
int ViTriLonNhat(int a[], int n)
{
	int lc = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > a[lc])
			lc = i;
	return lc;
}
int TimChuSo(int a[], int n)
{
	int dem[10] = { 0,0,0,0,0,0,0,0,0,0 };
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0)
			dem[0]++;
		int t = abs(a[i]);
		while (t != 0)
		{
			int dv = t % 10;
			dem[dv]++;
			t = t / 10;
		}
	}
	return ViTriLonNhat(dem, 10);
}