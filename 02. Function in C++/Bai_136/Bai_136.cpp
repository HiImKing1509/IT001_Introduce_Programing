#include <iostream>
#include <cmath>
using namespace std;
int KtNhuan(int);
void LietKe(int, int);

int main()
{
	int x;
	cout << "Nhap x = ";
	cin >> x;
	int y;
	cout << "Nhap y = ";
	cin >> y;

	LietKe(x, y);
	return 1;
}
void LietKe(int n, int m)
{
	cout << "Nam nhuan trong doan " << n << " den " << m << " la: ";
	for (int i = n; i <= m; i++)
		if (KtNhuan(i) == 1)
			cout << i << " ";
}
int KtNhuan(int k)
{
	if ((k % 4 == 0 && k % 100 != 0) || (k % 400 == 0))
		return 1;
	else
		return 0;
}
