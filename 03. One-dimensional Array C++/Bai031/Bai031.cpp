#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	LietKe(b, k);
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + rand() / (RAND_MAX / (100.0 - (-100.0)));
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << fixed << setprecision(3) << a[i] << setw(10);
}
void LietKe(int a[], int n)
{
	cout << "\nCac cap gia tri (x,y) duoc tao tu cac gia tri trong mang thoa x<=y la: ";
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i != j && a[i] <= a[j])
			{
				cout << "\n(" << a[i] << ", ";
				cout << a[j] << ")" << " " << setw(5);
			}
}