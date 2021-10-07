#include <iostream>
using namespace std;
void Nhap(int&);
int HangTram(int);

int main()
{
	int n;
	Nhap(n);
	HangTram(n);

	float ht = HangTram(n);
	cout << "Chu so hang tram cua " << n << " la: " << ht;
	return 1;
}
void Nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}
int HangTram(int n)
{
	return (n / 100) % 10;
}