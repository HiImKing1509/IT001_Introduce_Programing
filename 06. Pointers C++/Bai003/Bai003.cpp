#include <iostream>
#include <iomanip>
#include <ctime>
#include <fstream>

using namespace std;

int Nhap(int*, int&);
void Xuat(int*, int);

int main()
{
	int* b;
	int k;
	ifstream fi("Bai003.txt");
	fi >> k;

	b = new int[k];
	string filename;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	delete[]b;
	fi.close();
	return 1;
}
int Nhap(int* a, int& n)
{
	ifstream fi("Bai003.txt");
	fi >> n;
	for (int i = 0; i < n; i++)
		fi >> a[i];
	return 1;
}
void Xuat(int* a, int n)
{
	cout << n << endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(6);
}
