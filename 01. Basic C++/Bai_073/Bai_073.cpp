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
	int m = 0;
	int i = 1;
	while (i <= n)
	{
		m = m + i;
		t = t * x;
		s = s + (float)t / m;
		i = i + 1;
	}
	cout << "\nTong la: " << s;
	return 1;
}