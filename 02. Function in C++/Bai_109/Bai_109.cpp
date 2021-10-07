#include <iostream>
#include <cmath>
using namespace std;
float Tong();

int main()
{
	float kq = Tong();
	cout << "e =  " << kq;
	return 1;
}
float Tong()
{
	float s = 1;
	int m = 1;
	int i = 1;
	float e = 1;
	while (e >= pow(10, -6))
	{
		m = m * i;
		e = (float)1 / m;
		s = s + e;
		i = i + 1;
	}
	return s;
}

