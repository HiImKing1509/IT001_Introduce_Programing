#include <iostream>
#include <cmath>
using namespace std;
int Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = Tong(n);
	cout << "Ket qua = " << kq;
	return 1;
}

int Tong(int k)
{
	int s = 0;
	for (int i = 1; i <= k; i++)
		s = s + i * i;
	return s;
}