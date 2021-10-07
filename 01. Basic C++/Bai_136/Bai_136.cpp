#include<iostream>
using namespace std;
int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;
	int y;
	cout << "Nhap y: ";
	cin >> y;
	cout << "Cac nam nhuan trong doan hai nam " << x << " den " << y << " la: ";
	int t = x;
	while (t <= y)
	{
		if ((t % 4 == 0 && t % 100 != 0) || t % 400 == 0)
			cout << t << " ";
		t = t + 1;
	}
	return 1;
}