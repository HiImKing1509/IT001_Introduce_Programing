#include <iostream>
using namespace std;
void Nhap(int&, float&);
float Chuvi(int, float);

int main()
{
	int n;
	float r;
	Nhap(n,r);

	float cv = Chuvi(n, r);
	cout << "Chu vi da giac deu "<<n<<" canh noi tiep duong tron ban kinh " << r << " = " << cv;
	return 1;
}
void Nhap(int& n, float& r)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap r: ";
	cin >> r;
}
float Chuvi(int n, float r)
{
	return 2 * n * r * sin(3.14 / n);
}