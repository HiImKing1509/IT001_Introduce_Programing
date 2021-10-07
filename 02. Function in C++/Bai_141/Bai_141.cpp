#include <iostream>
using namespace std;
int csdt(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int dt = csdt(n);
	cout << "Chu so dau tien cua " << n << " la: " << dt;

	return 1;
}
int csdt(int k)
{
	int dt = abs(k);
	while (dt >= 10)
		dt = dt / 10;
	return dt;
}