#include <iostream>
#include <cmath>
using namespace std;
float Tong(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float kq = Tong(n);
	cout << "Ket qua = " << kq;
	return 1;
}
float Tong(int k)
{
	float s = 0;
	float m = 0;
	for (int i = 1; i <= k; i++)
	{
		m = m + i;
		s = s + 1 / m;
	}
	return s;
}