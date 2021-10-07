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
	float t = x;
	int i = 1;
	while (i <= n)
	{
		t = sin(t);
		s = s + t;
		i = i + 1;
	}
	cout << "\nTong la: " << s;
	return 1;
}