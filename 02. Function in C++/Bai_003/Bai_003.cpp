#include <iostream>
using namespace std;
void Nhap(float&);
float Chuvi(float);

int main()
{
	float r;
	Nhap(r);

	float cv = Chuvi(r);
	cout << "Chu vi duong tron ban kinh " << r << " = " << cv;
	return 1;
}
void Nhap(float& r)
{
	cout << "Nhap r: ";
	cin >> r;
}
float Chuvi(float r)
{
	return 3.14 * 2 * r;
}