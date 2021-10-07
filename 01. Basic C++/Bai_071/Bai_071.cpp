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
	float s = x;
	float t = x;
	int i = 1;
	while (i <= n)
	{
		t = t * x * x;
		s = s + t;
		i = i + 1;
	}
	cout << "\nTong la: " << s;
	return 1;
}