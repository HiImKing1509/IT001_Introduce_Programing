#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int TimChanDau(int[][100], int, int);

int main()
{
	int b[100][100];
	int k, l, h;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	if (TimChanDau(b, k, l) == -1)
		cout << "Ma tran khong ton tai so chan";
	else
		cout << "So chan dau tien trong ma tran: " << TimChanDau(b, k, l);
	return 1;
}
void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % (200 + 1) - 100;
		}
	}
}
void Xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(5) << a[i][j];
		}
		cout << endl;
	}
}
int TimChanDau(int a[][100], int m, int n)
{
	if (n == 0)
		return -1;
	int lc = TimChanDau(a, m, n - 1);
	if (lc != -1)
		return lc;
	for (int i = 0; i < m; i++)
		if (a[i][n - 1] % 2 == 0)
			return a[i][n - 1];
	return -1;

}



