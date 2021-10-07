#include <iostream>
#include <cmath>
using namespace std;
float Tong(int, float);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float x;
	cout << "Nhap x: ";
	cin >> x;

	float kq = Tong(n, x);
	cout << "Ket qua = " << kq;
	return 1;
}
float Tong(int k, float y)
{
	float s = 0;
	for (int i = 1; i <= k; i++)
	{
		s = s + pow(i, y);
	}
	return s;
}