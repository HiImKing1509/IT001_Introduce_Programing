#include <iostream>
#include <cmath>
using namespace std;
int KtNguyenTo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	KtNguyenTo(n);
	if (KtNguyenTo(n) == 2)
		cout << n << " la so nguyen to";
	else
		cout << n << " khong phai la so nguyen to";
	return 1;
}
int KtNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem = dem + 1;
	return dem;
}