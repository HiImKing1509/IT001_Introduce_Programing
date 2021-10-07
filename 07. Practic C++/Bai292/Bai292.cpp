#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void NguyenHoa(float[][100], int, int);


int main()
{
	float b[100][100];
	int k;
	int h;
	Nhap(b, k, h);
	Xuat(b, k, h);
	NguyenHoa(b, k, h);
	cout << endl;
	cout << "Mang sau khi nguyen hoa la: \n";
	Xuat(b, k, h);
	return 1;
}
void Nhap(float a[][100], int& n, int& m)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap m: ";
	cin >> m;
	srand(std::time(nullptr));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			a[i][j] = -100 + rand() / (RAND_MAX / (200.0));
	}
}
void Xuat(float a[][100], int n, int m)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(9) << fixed << setprecision(3) << a[i][j];
		cout << endl;
	}
}
void NguyenHoa(float a[][100], int m, int n)
{
	if (m == 0)
		return;
	NguyenHoa(a, m - 1, n);
	for (int i = 0; i < n; i++)
		if (a[m - 1][i] > 0)
			a[m - 1][i] = int(a[m - 1][i] + 0.5);
		else 
			a[m - 1][i] = int(a[m - 1][i] - 0.5);
	
}