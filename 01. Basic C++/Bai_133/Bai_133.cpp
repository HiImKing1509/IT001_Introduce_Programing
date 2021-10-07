#include <iostream>
using namespace std;
int main()
{
	float x, y, z;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "Nhap z: ";
	cin >> z;
	if (x + y > z && x + z > y && y + z > x)
	{
		if (x == y && y == z)
		{
			cout << "Tam giac deu";
		}
		else
			if ((x == y && y != z) || (x == z && z != y) || (y == z && z != x))
			{
				if (x * x + y * y == z * z || x * x + z * z == y * y || z * z + y * y == x * x)
					cout << "Tam giac vuong can";
				else
					cout << "Tam giac can";
			}
			else
			{
				if (x * x + y * y == z * z || x * x + z * z == y * y || z * z + y * y == x * x)
					cout << "Tam giac vuong";
				else
					cout << "Tam giac thuong";
			}


	}
	else
		cout << "Khong la tam giac";
	return 1;

}