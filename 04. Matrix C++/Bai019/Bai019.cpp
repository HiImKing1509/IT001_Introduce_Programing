#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktDoiXung(int);
void LietKe(int[][100], int, int, int);

int main()
{
	int b[100][100];
	int k, l, h;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "Nhap cot d: ";
	cin >> h;

	cout << "Cac gia tri doi xung tren cot " << h << ": ";
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
bool ktDoiXung(int n)
{
	int dx = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		dx = dx * 10 + dv;
		t = t / 10;
	}
	if (dx == n)
		return true;
	return false;
}
void LietKe(int a[][100], int m, int n, int d)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ktDoiXung(a[i][d]))
		{
			cout << a[i][d] << setw(6);
			dem++;
		}
	if (dem == 0)
		cout << "Khong co so doi xung";
}