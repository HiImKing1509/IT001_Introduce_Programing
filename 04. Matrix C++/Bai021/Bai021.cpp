#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
void LietKe(int[][100], int, int);

int main()
{
	int b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "Cac gia tri nam tren bien ma tran: ";
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
void LietKe(int a[][100], int m, int n)
{
	for (int j = 0; j < n - 1; j++)
		cout << a[0][j] << setw(5);

	for (int i = 0; i < m - 1; i++)
		cout << a[i][n - 1] << setw(5);

	for (int j = n - 1; j > 0; j--)
		cout << a[m - 1][j] << setw(5);

	for (int i = m - 1; i > 0; i--)
		cout << a[i][0] << setw(5);
}