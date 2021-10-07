#include<iostream>
#include<iomanip>
using namespace std;
int KTtoanchan(int);
int main()
{
	int n;
	cout << "Nhap so n: ";
	cin >> n;
	int kq = KTtoanchan(n);
	if (kq == 1)
		cout << "\nSo " << n << " toan chan";
	else
		cout << "\nSo " << n << " ton tai so le";
	return 1;
}
int KTtoanchan(int n)
{
	if (n <= 9)
	{
		if (n % 2 != 0)
			return 0;
		return 1;
	}
	int dv = n % 10;
	if (KTtoanchan(n / 10) == 1 && dv % 2 == 0)
		return 1;
	return 0;
}
