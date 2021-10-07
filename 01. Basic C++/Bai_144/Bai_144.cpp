#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int nghiem = 0;
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			nghiem = nghiem + 1;
		i = i + 1;
	}
	if (nghiem == 2)
		cout << n << " la so nguyen to";
	else
		cout << n << " khong la so nguyen to ";
	return 1;
}