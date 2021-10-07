#include <iostream>
#include <cmath>
using namespace std;
int KtDang5K(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	KtDang5K(n);
	if (KtDang5K(n) == 1)
		cout << n << " la so co dang 5^k";
	else
		cout << n << " khong phai la so co dang 5^k";
	return 1;
}
int KtDang5K(int k)
{
	int flag = 1;
	for (int t = k; t > 1; t = t / 5)
	{
		int dv = t % 5;
		if (dv != 0)
			flag = 0;
	}
	return flag;
}