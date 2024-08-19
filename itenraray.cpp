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
// #define map map<int, int>
#define umap unordered_map<int, int>

#define msp multiset<pii>
#define vpi vector<pii>
#define f first
#define s second
#define it iterator

using namespace std;
int main()
{
    map<string, string> m;
    map<string, string> m1;
    int n;
    cin >> n;
    far(i, 0, n)
    {
        string k, v;
        cin >> k >> v;
        m[k] = v;
    }
    int j = 2 * n + 1;
    vector<string> v(j);
    map<string, bool> pres;
    int k = 0;

    for (const auto &i : m)
    {
        string st = i.f;

        for (const auto &j : m)
        {
            if (st == j.s)
            {
                // cout<<st<<" ";
                pres[st] = true;
                break;
            }
            else
            {
                pres[st] = false;
            }
        }
    }

    for (const auto &i : pres)
    {
        if ((i.s) == false)
        {
            v[k++] = i.f;
            // cout<<i.f<<" ";
        }
    }

    cout << v[0] << " ";
    for (int k = 1; k < (j); k++)
    {
        v[k] = m[v[k - 1]];
    }

    for (auto &i : v)
    {

        cout << i << " ";
    }

    // approch - 2 by using other map copying to it in reverse and checking

    map<string, string> m;
    map<string, string> m1;
    int n;
    cin >> n;
    far(i, 0, n)
    {
        string k, v;
        cin >> k >> v;
        m[k] = v;
    }
    for (const auto &i : m)
    {
        m1[i.s] = i.f;
    }
    int j = 2 * n + 1;
    vector<string> v(j);
    map<string, bool> pres;
    int k = 0;

    for (const auto &i : m)
    {
        string st = i.f;

        for (const auto &j : m1)
        {
            if (st == j.f)
            {
                // cout<<st<<" ";
                pres[st] = true;
                break;
            }
            else
            {
                pres[st] = false;
            }
        }
    }

    for (const auto &i : pres)
    {
        if ((i.s) == false)
        {
            v[k++] = i.f;
            // cout<<i.f<<" ";
        }
    }

    for (int k = 1; k < (j); k++)
    {
        v[k] = m[v[k - 1]];
    }

    for (auto &i : v)
    {

        cout << i << " ";
    }

    return 0;
}