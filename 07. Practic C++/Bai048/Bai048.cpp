#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int TimK(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Ket qua: k = " << TimK(n * 2);
	return 1;
}
int TimK(int t)
{
	if (t == 1)
		return 0;
	return TimK(t / 2) + 1;
}
