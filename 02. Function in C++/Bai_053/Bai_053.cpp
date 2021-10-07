#include <iostream>
#include <cmath>
using namespace std;
void LietKeUocLe(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tat ca cac uoc so le cua " << n << " la: ";

	LietKeUocLe(n);
	return 1;
}
void LietKeUocLe(int k)
{
	for (int i = 1; i <= k; i = i + 2)
		if (k % i == 0)
			cout << i << " ";
}