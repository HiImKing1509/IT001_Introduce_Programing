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
	float s = 1;
	float t = 1;
	int m = 1;
	int i = 2;
	while (i <= 2 * n)
	{
		m = m * i * (i - 1);
		t = t * x * x;
		s = s + (float)t / m;
		i = i + 2;
	}
	cout << "\nTong la: " << s;
	return 1;
}