#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float k;
	cout << "Nhap k: ";
	cin >> k;
	float s = 0;
	int i = 1;
	while (i <= n)
	{
		s = s + pow(i, k);
		i = i + 1;
	}
	cout << "\nTong la: " << s;
	return 1;
}