#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float s = 3;
	int i = 1;
	float e = 1;
	int dau = 1;
	while (e >= pow(10, -6))
	{
		e = (float)4 / (2 * i * (2 * i + 1) * (2 * i + 2));
		s = s + dau * e;
		i = i + 1;
		dau = -dau;
	}
	cout << "Pi = " << s;
	return 1;
}