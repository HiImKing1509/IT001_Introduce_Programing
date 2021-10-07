#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

long long GiaiThua(int);
long long ChinhHop(int, int);

using namespace std;
int main()
{
	//KHONG NHAP SO QUA LON ( -1 < n,k < 20 ) 
	cout << "VUI LONG KHONG NHAP SO QUA LON" << endl;
	int n, k;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap k: ";
	cin >> k;
	if (k<0 || k>n)
		cout << "\nKhong hop le";
	else
	{
		cout << "\nChinh hop chap " << k << " cua " << n << " phan tu la: " << ChinhHop(n, k);
		cout << "\nKi hieu: " << n << "P" << k << " = " << ChinhHop(n, k);
	}
	return 1;
}
long long GiaiThua(int t)
{
	if (t == 0)
		return 1;
	long long T = GiaiThua(t - 1);
	return T * t;
}
long long ChinhHop(int t, int x)
{
	long long a = GiaiThua(t);
	long long b = GiaiThua(t - x);
	return a / b;
}
