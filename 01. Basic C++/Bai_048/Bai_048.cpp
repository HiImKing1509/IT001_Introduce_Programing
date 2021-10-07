#include <iostream>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	int n ;
	cout << "Nhap n: ";
	cin >> n;
	int s = x;
	int i = 1;
	while (i <= n)
	{
		s = s * (x + i);
		i = i + 1;
	}
	cout << "\nTich la: " << s;
	return 1;
}