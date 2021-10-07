#include <iostream>
#include <cmath>
using namespace std;
float Tong();

int main()
{
	float kq = Tong();
	cout << "Pi =  " << kq;
	return 1;
}
float Tong()
{
	float s = 0;
	int i = 1;
	float e = 1;
	int dau = 1;
	while (e >= pow(10, -6))
	{
		e = (float)4 / (2 * i - 1);
		s = s + dau * e;
		dau = -dau;
		i = i + 1;
	}
	return s;
}

