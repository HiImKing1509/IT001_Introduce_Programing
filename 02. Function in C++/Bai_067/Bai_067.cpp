#include <iostream>
#include <cmath>
using namespace std;
int ktTonTaiLe(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = ktTonTaiLe(n);
	if (kq == 1)
		cout << n << " ton tai chu so le";
	else
		cout << n << " khong ton tai chu so le";
	return 1;
}
int ktTonTaiLe(int k)
{
	int flag = 0;
	for (int t = k; t != 0; t = t / 10)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			flag = 1;
	}
	return flag;
}