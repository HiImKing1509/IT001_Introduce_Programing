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
	for (int i = k; i >= 1; i = i - 1)
		s = sqrt(i + s);
	return s;
}
