#include <iostream>
#include <cmath>
using namespace std;
float Tong();
int main()
{
	float kq = Tong();
	cout << "Ket qua = " << kq;
	return 1;
}
float Tong()
{
	float s = 1;
	int i = 3;
	for (float e = 1; e >= pow(10, -6); e = (float)1 / i)
	{
		s = s + e;
		i = i + 2;
	}
	return s;
}