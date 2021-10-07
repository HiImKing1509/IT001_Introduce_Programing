#include<iostream>
#include<iomanip>
using namespace std;
int KTgiam(int);
int main()
{
	int n;
	cout << "Nhap so n: ";
	cin >> n;
	int kq = KTgiam(n);
	if (kq == 1)
		cout << "\nSo " << n << " giam dan tu trai qua";
	else
		cout << "\nSo " << n << " khong giam dan tu trai qua";
	return 1;
}
int KTgiam(int n)
{
	if (n <= 9)
		return 1;
	int dv = n % 10;
	int hc = (n / 10) % 10;
	if(KTgiam(n/10)==1&&hc>=dv)
		return 1;
	return 0;
}
