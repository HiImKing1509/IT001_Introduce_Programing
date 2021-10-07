#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[], int&);
void LietKe(float[], int);
int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	LietKe(b, k);
	return 1;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + rand() / (RAND_MAX / (200.0));
	}
}
void LietKe(float a[], int n)
{
	if (n == 0)
	return;
	LietKe(a, n - 1);
	cout << setw(10) << setprecision(3) << a[n - 1];

}
