#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int T = 1;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		T = T * dv;
		t = t / 10;
	}
	cout << "\nTich cac chu so cua " << n << " la: " << T;
	return 1;
}