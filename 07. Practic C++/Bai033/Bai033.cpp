#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int ktTangDan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (ktTangDan(n) == 1)
		cout << "Cac chu so cua " << n << " tang dan";
	else
		cout << "Cac chu so cua " << n << " khong tang dan";
	return 1;
}
int ktTangDan(int k)
{
	k = abs(k);
	if (k <= 9)
		return 1;
	int dv = k % 10;
	int hc = (k / 10) % 10;
	if (ktTangDan(k / 10) == 1 && dv >= hc)
		return 1;
	return 0;
}
