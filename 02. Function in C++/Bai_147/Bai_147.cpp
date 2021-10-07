#include <iostream>
#include <cmath>
using namespace std;
int KtToanLe(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	KtToanLe(n);
	if (KtToanLe(n) == 1)
		cout << n << " la so co toan so le";
	else
		cout << n << " khong phai la so co toan so le";
	return 1;
}
int KtToanLe(int k)
{
	int flag = 1;
	for (int t = k; t != 0; t = t / 10)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = 0;
	}
	return flag;
}