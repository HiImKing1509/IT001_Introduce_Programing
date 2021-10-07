#include<iostream>
#include<iomanip>
using namespace std;
void Lietke(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "\nDay can tim la: ";
	Lietke(n);
	return 1;
}
void Lietke(int n)
{
	if (n == 1)
	{
		cout << setw(5) << n;
		return;
	}
	cout << setw(6) << n;
	if (n % 2 == 0)
		Lietke(n / 2);
	else
		Lietke(3 * n + 1);
}