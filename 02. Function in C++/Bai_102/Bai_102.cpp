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
	int i = 1;
	for (float e = 1; e >= pow(10, -6); e = (float)1 / (2 * i))
	{
		s = s + e;
		i++;
	}
	return s;
}