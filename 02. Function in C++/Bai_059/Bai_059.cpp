#include <iostream>
#include <cmath>
using namespace std;
int DemChuSo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = DemChuSo(n);
	cout << "So luong chu so cua " << n << " la: " << kq;
	return 1;
}
int DemChuSo(int k)
{
	int dem = 0;
	for (int t = k; t != 0; t = t / 10)
		dem = dem + 1;
	return dem;
}