#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktTonTai(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	if (ktTonTai(b, k) != 1)
		cout << "\nMang khong co hai gia tri 0 lien tiep";
	else
		cout << "\nMang co chua hai gia tri 0 lien tiep";
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (10 + 1) - 5;
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(6);
}
int ktTonTai(int a[], int n)
{
	int flag = 0;
	for (int i = 0; i < n - 1; i++)
		if (a[i] == 0 && a[i + 1] == 0)
			flag = 1;
	return flag;
}