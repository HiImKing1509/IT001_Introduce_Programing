#include <iostream>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * x;
		i = i + 1;
	}
	cout << "\nLuy thua = " << T;
	return 1;
}