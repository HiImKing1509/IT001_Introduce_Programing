#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktDang5m(int);
int Tong5m(int[][100], int, int);

int main()
{
	int b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "Tong cac gia tri dang 5^m nam tren bien ma tran: " << Tong5m(b, k, l);
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
bool ktDang5m(int k)
{
	if (k < 1)
		return false;
	bool flag = true;
	for (int t = k; t > 1; t = t / 5)
		if (t % 5 != 0)
			flag = false;
	return flag;
}
int Tong5m(int a[][100], int m, int n)
{
	int s = 0;
	for (int j = 0; j < n - 1; j++)
		if (ktDang5m(a[0][j]))
			s = s + a[0][j];

	for (int i = 0; i < m - 1; i++)
		if (ktDang5m(a[i][n - 1]))
			s = s + a[i][n - 1];

	for (int j = n - 1; j > 0; j--)
		if (ktDang5m(a[m - 1][j]))
			s = s + a[m - 1][j];

	for (int i = m - 1; i > 0; i--)
		if (ktDang5m(a[i][0]))
			s = s + a[i][0];
	return s;
}