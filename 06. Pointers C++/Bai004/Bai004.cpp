#include <iostream>
#include <iomanip>
#include <ctime>
#include <fstream>

using namespace std;

int Nhap(float*, int&);
void Xuat(float*, int);

int main()
{
	float* b;
	int k;
	ifstream fi("Bai003.txt");
	fi >> k;

	b = new float[k];
	string filename;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	delete[]b;
	fi.close();
	return 1;
}
int Nhap(float* a, int& n)
{
	ifstream fi("Bai003.txt");
	fi >> n;
	for (int i = 0; i < n; i++)
		fi >> a[i];
	return 1;
}
void Xuat(float* a, int n)
{
	cout << n << endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(6);
}
