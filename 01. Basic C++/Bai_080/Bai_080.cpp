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
	int i = 2;
	while (i <= n + 1)
	{
		t = t * x;
		s = s + t * i;
		i = i + 1;
	}
	cout << "\nTong la: " << s;
	return 1;
}