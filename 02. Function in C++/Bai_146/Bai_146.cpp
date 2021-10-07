#include <iostream>
#include <cmath>
using namespace std;
int KtDoiXung(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	KtDoiXung(n);
	if (KtDoiXung(n) == n)
		cout << n << " la so doi xung";
	else
		cout << n << " khong phai la so doi xung";
	return 1;
}
int KtDoiXung(int k)
{
	int dn = 0;
	for (int t = k; t != 0; t = t / 10)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
	}
	return dn;
}