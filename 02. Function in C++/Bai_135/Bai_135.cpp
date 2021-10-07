#include <iostream>
#include <cmath>
using namespace std;
int ktNhuan(int&);

int main()
{
	int n;
	cout << "Nhap nam n: ";
	cin >> n;

	ktNhuan(n);
	if (ktNhuan(n) == 1)
		cout << n << " la nam nhuan";
	else
		cout << n << " la nham khong nhuan";

	return 1;
}
int ktNhuan(int& n)
{
	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
		return 1;
	else
		return 0;
}
