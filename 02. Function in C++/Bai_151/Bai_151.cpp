#include <iostream>
#include <cmath>
using namespace std;
int KtDang2K(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	KtDang2K(n);
	if (KtDang2K(n) == 1)
		cout << n << " la so co dang 2^k";
	else
		cout << n << " khong phai la so co dang 2^k";
	return 1;
}
int KtDang2K(int k)
{
	int flag = 1;
	for (int t = k; t > 1; t = t / 2)
	{
		int dv = t % 2;
		if (dv != 0)
			flag = 0;
	}
	return flag;
}