#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float s = 0;
	float t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * sin(x);
		s = s + t;
		i = i + 1;
	}
	cout << "\nTong la: " << s;
	return 1;
}