#include <iostream>
#include <cmath>
using namespace std;
void DinhDang(float, float, float);

int main()
{
	int x;
	cout << "Nhap x = ";
	cin >> x;
	int y;
	cout << "Nhap y = ";
	cin >> y;
	int z;
	cout << "Nhap z = ";
	cin >> z;

	DinhDang(x, y, z);
	return 1;
}
void DinhDang(float a, float b, float c)
{
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == b && b == c)
		{
			cout << "Tam giac deu";
		}
		else
			if ((a == b && b != c) || (a == c && c != b) || (b == c && c != a))
			{
				if (a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a)
					cout << "Tam giac vuong can";
				else
					cout << "Tam giac can";
			}
			else
			{
				if (a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a)
					cout << "Tam giac vuong";
				else
					cout << "Tam giac thuong";
			}
	}
	else
		cout << "Khong la tam giac";
}
	