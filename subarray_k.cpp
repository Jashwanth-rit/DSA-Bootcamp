#include <iostream>
#include <vector>
#include <limits>
#include <set>
#include <bits/stdc++.h>
#define far(i, a, b) for (int i = a; i < b; i++)
#define raf(i, a, b) for (int i = a; i >= b; i--)
#define ret return
#define mii map<int, int>

#define vi vector<int>
#define mvi map<int, vi>
#define vvi vector<vi>
#define pii pair<int, int>
#define ms multiset<int>
#define setg set<int, greater<int>>
#define set set<int>
#define mapsb map<string, bool>
#define mapss map<string, string>
#define mapvi map<int, vi>
#define mappi map<int, pii>
#define map map<int, int>
#define umap unordered_map<int, int>

#define msp multiset<pii>
#define vpi vector<pii>
#define f first
#define s second
#define it iterator

using namespace std;
int main()
{

    map m;
    int n;
    cin >> n;
    int k;
    cin >> k;
    vi v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    far(i, 1, n)
    {
        v[i] = v[i] + v[i - 1];
    }
    for (const auto &i : v)
    {
        m[i] = m[i] + 1;
    }

    
    for(const auto &i : v){
        cout<<i<<" ";
    }
    cout<<"\n";

    
    for(const auto &i : m){
        cout<<i.f<<" "<<i.s;
        cout<<"\n";
    }

    int ans = 0;
m[0] = 1;
    for (const auto &i : v)
    {
        if (m[i - k])
        {
            ans = ans + m[i - k];
        }
    }
    cout << ans;
    return 0;
}