#include <iostream>
#include <cmath>
using namespace std;
float GiaiThua(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float kq = GiaiThua(n);
	cout << "Ket qua = " << kq;
	return 1;
}

float GiaiThua(int k)
{
	float t = 1;
	for (int i = 1; i <= k; i = i + 1)
		t = t * i;
	return t;
}