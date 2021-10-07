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
	float s = 0;
	float e = 1;
	for (int i = 1; e >= pow(10, -6); i++)
	{
		e = (float) 1 / i;
		s = s + e;
	}
	return s;
}