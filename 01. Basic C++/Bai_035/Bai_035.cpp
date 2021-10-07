#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * i;
		i = i + 1;
	}
	cout << "\nGiai thua la: " << T;
	return 1;
}