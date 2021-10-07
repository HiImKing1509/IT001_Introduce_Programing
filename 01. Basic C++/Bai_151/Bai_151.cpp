#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int flag = 1;
	int t = n;
	int dv;
	while (t > 1)
	{
		dv = t % 2;
		if (dv != 0)
			flag = 0;
		t = t / 2;
	}
	if (flag == 1)
		cout << n << " co dang 2^m";
	else
		cout << n << " khong co dang 2^m";
	return 1;
}