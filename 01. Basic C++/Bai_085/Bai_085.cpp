#include <iostream>
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
	int dau = 1;
	while (i <= n)
	{
		t = t * x;
		s = s + (float)dau * t;
		i = i + 1;
		dau = -dau;
	}
	cout << "\ns(x,n)= " << s;
	return 1;
}