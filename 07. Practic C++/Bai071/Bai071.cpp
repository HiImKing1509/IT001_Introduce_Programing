#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void Try(int, int);

int main() 
{
    int b[100];
    int k=8;
    Xuat(b, k);
    Try(1, k);
    return 0;
}
int a[100];
bool Ok(int x2, int y2) 
{
    for (int i = 1; i < x2; i++)
        if (a[i] == y2 || abs(i - x2) == abs(a[i] - y2))
            return false;
    return true;
}
void Xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << setw(4) << a[i];
    }
}

void Try(int i, int n) 
{
    for (int j = 1; j <= n; j++) 
    {
        if (Ok(i, j)) 
        {
            a[i] = j;
            if (i == n)
            {
                Xuat(a, n);
                cout << endl;
            }
            Try(i + 1, n);
        }
    }
}

