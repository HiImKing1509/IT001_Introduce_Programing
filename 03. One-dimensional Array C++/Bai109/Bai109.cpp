#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ucln(int, int);
int bcnn(int, int);
int TimBCNN(int[], int);

int main()
{
	int b[10];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	TimBCNN(b, k);
	cout << "\nBoi chung nho nhat: " << TimBCNN(b, k);

	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (100 + 1) + 0;
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(6);
}
int ucln(int a, int b)
{
	while (a * b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return (a + b);
}
int bcnn(int a, int b)
{
	return (a * b) / ucln(a, b);
}
int TimBCNN(int a[], int n)
{
	int lc = a[0];
	for (int i = 0; i < n; i++)
		lc = bcnn(lc, a[i]);
	return lc;
}