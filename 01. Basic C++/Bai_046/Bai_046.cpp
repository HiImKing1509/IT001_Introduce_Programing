#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	int i = 1;
	while (i <= n)
	{
		s = s + (float)1 / ((float)(i + 1) * (float)sqrt(i) + (float)i * (float)sqrt(i + 1));
		i = i + 1;
	}
	cout << "\nTong la: " << s;
	return 1;
}