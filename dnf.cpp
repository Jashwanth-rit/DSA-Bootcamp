#include <iostream>
using namespace std;
void swap(int a[], int l, int m)
{
    int t = a[l];
    a[l] = a[m];
    a[m] = t;
}
int dnf(int a[], int n)
{
    int l = 0;
    int m = 0;
    int h = n - 1;
    while (m < h)
    {
        if (a[m] == 0)
        {
            swap(a, l, m);
            m++;
            l++;
        }
        else if (a[m] == 1)
        {
            m++;
        }
        else
        {
            swap(a, m, h);
            h--;
            m++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
int main()
{
    int a[] = {0, 1, 2, 1, 0, 2, 1, 0};
    dnf(a, 8);
    return 0;
}
