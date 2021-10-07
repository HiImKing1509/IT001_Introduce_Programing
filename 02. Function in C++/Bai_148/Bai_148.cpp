#include <iostream>
#include <cmath>
using namespace std;
int KtToanChan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	KtToanChan(n);
	if (KtToanChan(n) == 1)
		cout << n << " la so co toan so chan";
	else
		cout << n << " khong phai la so co toan so chan";
	return 1;
}
int KtToanChan(int k)
{
	int flag = 1;
	for (int t = k; t != 0; t = t / 10)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			flag = 0;
	}
	return flag;
}