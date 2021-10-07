#include <iostream>
#include <cmath>
using namespace std;
int KtHoanThien(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	KtHoanThien(n);
	if (KtHoanThien(n) == n)
		cout << n << " la so hoan thien";
	else
		cout << n << " khong phai la so hoan thien";
	return 1;
}
int KtHoanThien(int k)
{
	int s = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			s = s + i;
	return s;
}