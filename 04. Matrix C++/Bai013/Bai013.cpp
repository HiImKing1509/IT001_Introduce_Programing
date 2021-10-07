#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktToanChan(int);
void LietKe(int[][100], int, int);
int main()
{
	int b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	LietKe(b, k, l);
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
bool ktToanChan(int n)
{
	int t = abs(n);
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			return false;
		t = t / 10;
	}
	return true;
}
void LietKe(int a[][100], int m, int n)
{
	cout << "Cac gia tri toan chan trong mang: ";
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktToanChan(a[i][j]))
			{
				cout << a[i][j] << setw(5);
				dem++;
			}
	if (dem == 0)
		cout << " Ma tran khong co gia tri toan chu so chan";
}
