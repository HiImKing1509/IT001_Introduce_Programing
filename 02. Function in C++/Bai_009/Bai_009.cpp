#include <iostream>
using namespace std;
void Nhap(int&, float&);
float Dientich(int, float);

int main()
{
	int n;
	float r;
	Nhap(n, r);

	float dt = Dientich(n, r);
	cout << "Dien tich da giac deu " << n << " canh noi tiep duong tron ban kinh " << r << " = " << dt;
	return 1;
}
void Nhap(int& n, float& r)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap r: ";
	cin >> r;
}
float Dientich(int n, float r)
{
	return 0.5 * n * r * r * sin(2 * 3.14 / n);
}