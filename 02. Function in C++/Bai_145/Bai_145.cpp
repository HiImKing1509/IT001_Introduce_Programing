#include <iostream>
#include <cmath>
using namespace std;
int KtChinhPhuong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	KtChinhPhuong(n);
	if (KtChinhPhuong(n) == 1)
		cout << n << " la so chinh phuong";
	else
		cout << n << " khong phai la so chinh phuong";
	return 1;
}
int KtChinhPhuong(int k)
{
	int flag = 0;
	for (int i = 0; i <= k; i++)
		if (i * i == k)
			flag = 1;
	return flag;
}