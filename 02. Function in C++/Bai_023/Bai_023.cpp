#include <iostream>
using namespace std;
void Nhap(int&);
int HangChuc(int);

int main()
{
	int n;
	Nhap(n);
	HangChuc(n);

	float hc = HangChuc(n);
	cout << "Chu so hang chuc cua " << n << " la: " << hc;
	return 1;
}
void Nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}
int HangChuc(int n)
{
	return (n / 10) % 10;
}