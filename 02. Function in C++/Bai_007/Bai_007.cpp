#include <iostream>
using namespace std;
void Nhap(float&);
float Nhietdo(float);

int main()
{
	float F;
	Nhap(F);

	float nd = Nhietdo(F);
	cout << "Do C = " << nd;
	return 1;
}
void Nhap(float& F)
{
	cout << "Nhap do F: ";
	cin >> F;
}
float Nhietdo(float F)
{
	return 5 * F / 9 - 32;
}