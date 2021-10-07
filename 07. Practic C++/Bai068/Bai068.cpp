#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void merge(int[], int, int, int);
void mergeSort(int [], int, int );


int main()
{
    int b[100];
    int k;
    Nhap(b, k);
    Xuat(b, k);
    int dd, cc;
    cout << "\nNhap doan can sap xep: ";
    cin >> dd >> cc;
    cout << "\nmang sau khi sap xep la:  ";
    mergeSort(b, dd, cc);
    for (int i = dd; i <= cc; i++)
        cout << b[i] << "  ";
    return 0;
}
void Nhap(int a[], int& n)
{
    cout << "Nhap n: ";
    cin >> n;
    srand(std::time(nullptr));
    for (int i = 0; i < n; i++)
    {
        a[i] = -100 + rand() / (RAND_MAX / (200.0));
    }
}
void Xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << setw(9) << fixed << setprecision(3) << a[i];
    }
}
void merge(int a[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[100];
    int R[100];

    
    for (i = 0; i < n1; i++)
        L[i] = a[l + i];
    for (j = 0; j < n2; j++)
        R[j] = a[m + 1 + j];

    
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    
    while (i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }

    
    while (j < n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }
}


void mergeSort(int a[], int l, int r)
{
    if (l < r)
    {
        
        int m = l + (r - l) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);

        merge(a, l, m, r);
    }
}



