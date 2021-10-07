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
		dv = t % 5;
		if (dv != 0)
			flag = 0;
		t = t / 5;
	}
	if (flag == 1)
		cout << n << " co dang 5^m";
	else
		cout << n << " khong co dang 5^m";
	return 1;
}