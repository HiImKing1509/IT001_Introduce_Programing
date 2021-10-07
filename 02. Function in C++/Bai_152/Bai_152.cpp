#include <iostream>
#include <cmath>
using namespace std;
int KtDang3K(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	KtDang3K(n);
	if (KtDang3K(n) == 1)
		cout << n << " la so co dang 3^k";
	else
		cout << n << " khong phai la so co dang 3^k";
	return 1;
}
int KtDang3K(int k)
{
	int flag = 1;
	for (int t = k; t > 1; t = t / 3)
	{
		int dv = t % 3;
		if (dv != 0)
			flag = 0;
	}
	return flag;
}