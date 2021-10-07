#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int flag = 0;
	int i = 0;
	while (i <= n)
	{
		if (i * i == n)
			flag = flag + 1;
		i = i + 1;
	}
	if (flag == 1)
		cout << n << " la so chinh phuong";
	else
		cout << n << " khong la so chinh phuong ";
	return 1;
}