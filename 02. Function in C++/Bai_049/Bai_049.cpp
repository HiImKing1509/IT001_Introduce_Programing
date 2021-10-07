#include <iostream>
#include <cmath>
using namespace std;
void LietKe(int);

int main()
{ 
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tat ca cac uoc cua "<<n<<" la: ";

	LietKe(n);
	return 1;
}
void LietKe(int k)
{
	for (int i = 1; i <= k; i = i + 1)
		if (k % i == 0)
			cout  << i << " ";
}