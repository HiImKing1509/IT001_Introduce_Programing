#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktDang5m(int);
void LietKe(int[][100], int, int, int);

int main()
{
	int b[100][100];
	int k, l, h;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "Nhap dong d: ";
	cin >> h;

	cout << "Cac gia tri dang 5^m tren cot " << h << ": ";
	LietKe(b, k, l, h);
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
bool ktDang5m(int n)
{
	if (n < 0)
		return false;
	int t = abs(n);
	while (t != 1)
	{
		if (t % 5 != 0)
			return false;
		t = t / 5;
	}
	return true;
}
void LietKe(int a[][100], int m, int n, int c)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ktDang5m(a[i][c]))
		{

			cout << a[i][c] << setw(5);
			dem++;
		}
	if (dem == 0)
		cout << " Khong co gia tri dang 5^m";
}
