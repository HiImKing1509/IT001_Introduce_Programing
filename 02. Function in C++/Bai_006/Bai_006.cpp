#include <iostream>
using namespace std;
void Nhap(float&);
float Nhietdo(float);

int main()
{
	float C;
	Nhap(C);

	float nd = Nhietdo(C);
	cout << "Do F = " << nd;
	return 1;
}
void Nhap(float& C)
{
	cout << "Nhap do C: ";
	cin >> C;
}
float Nhietdo(float C)
{
	return 1.8 * C + 32;
}