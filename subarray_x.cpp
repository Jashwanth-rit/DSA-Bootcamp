#include <iostream>
#include <vector>
#include <limits>
#include <bits/stdc++.h>
#define for(i, a, b) for (int i = a; i < b; i++)
#define rof(i, a, b) for (int i = a; i >= b; i--)
#define ret return
#define mii map<int, int>

#define vi vector<int>
#define mvi map<int, vi>
#define vvi vector<vi>
#define pii pair<int, int>
#define ms multiset<int>
#define set set<int>
#define setg set<int, greater<int>>
#define msp multiset<pii>
#define vpi vector<pii>
#define f first
#define s second
#define it iterator

using namespace std;

int main()
{
    vi a = {2, 3, 5, 1, 6, 8, 9};
    int s = 0;
    int x = 10;
    int ans = INT_MAX;
    // for (i, 0, 7)
    // {
    //     s += a[i];
    //     if (s >= x)
    //     {
    //         ans = min(ans, i + 1);
    //         break;
    //     }
    // }
    // int k = ans - 1;
    // cout<<k<<" ";
    // s = s - a[0];
    int k = 0;

    for (i, 0, 7)
    {
        //cout << s << " ";
        if (s >= x)
        {
            while (s >= x)
            {

                s = s - a[k];

                ans = min(ans, i - k);
               // cout << k << " " << s << " " << ans << " ";
                k++;
                // if (s < x)
                // {
                //     s += a[i];

                // }
            }
        }
        else
        {
           // cout << " entered else" << " ";
            s += a[i];
        }
    }
//cout<<s;
s = s + a[6];
    while(s >= x)
    {
       

        ans = min(ans, 6 - k+1);
        //cout << k << " " << s << " " << ans << " ";
         s = s - a[k];
        k++;
    }

    cout << ans << " ";

    return 0;
}