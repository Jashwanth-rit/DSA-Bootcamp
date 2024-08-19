
//rpogram to merge two sorted array 
//technique of merge sort

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int c[n + m];
    int j = 0, k = 0, p = 0;

    while (j < n && p < m)
    {

        if (a[j] < b[p])
        {

            c[k] = a[j];
            j++;
            k++;
        }
        else if (a[j] > b[p])
        {

            c[k] = b[p];
            p++;
            k++;
        }
        else
        {
            c[k] = a[j];
            j++;
            k++;
        }
    }
    while (j < n)
    {
        c[k] = a[j];
        j++;
        k++;
    }
    while (p < m)
    {
        c[k] = b[p];
        p++;
        k++;
    }

    for (int i = 0; i < n + m; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}