#include <iostream>
using namespace std;
void Nhap(float&);
float DientichXQ(float);

int main()
{
	float r;
	Nhap(r);

	float dt = DientichXQ(r);
	cout << "Dien tich xung quanh hinh cau ban kinh " << r << " = " << dt;
	return 1;
}
void Nhap(float& r)
{
	cout << "Nhap r: ";
	cin >> r;
}
float DientichXQ(float r)
{
	return 4 * 3.14 * r * r;
}