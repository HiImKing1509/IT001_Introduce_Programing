#include <iostream>
#include <cmath>
using namespace std;
int DemSoLe(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = DemSoLe(n);
	cout << "So luong chu so le cua " << n << " la: " << kq;
	return 1;
}
int DemSoLe(int k)
{
	int dem = 0;
	for (int t = k; t != 0; t = t / 10)
	{
		int dv = t % 10;
		if (dv % 2 == 1)
			dem++;
	}
	return dem;
}