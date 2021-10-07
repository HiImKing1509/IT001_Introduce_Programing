#include <iostream>
#include <cmath>
using namespace std;
int DemUocChan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = DemUocChan(n);
	cout << "So luong uoc so chan cua " << n << " la: " << kq;
	return 1;
}

int DemUocChan(int k)
{
	int dem = 0;
	for (int i = 2; i <= k; i = i + 2)
	{
		if (k % i == 0)
			dem = dem + 1;
	}
	return dem;
}