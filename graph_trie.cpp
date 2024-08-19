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
#define N 100

using namespace std;

bool vis[N];
vi adj[N];

void bfs(){
    
}
void dfs(int i)
{
    vis[i] = true;
    cout << i << " ";
    for (const auto &p : adj[i])
    {
        if (!vis[p])
        {
            dfs(p);
        }
    }
}

int main()
{
    int n;
    cin >> n;

    for (auto &i : adj)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for (int i = 1; i < n; i++)
    {
        cout << i << " ";
        for (const auto &j : adj[i])
        {
            cout << " " << j;
        }
        cout << "\n";
    }
    cout << "******\n";
    // for (int i = 1; i < n; i++)
    // {
    //     if (!vis[i])
    //     {
    //         dfs(i);
    //     }

    //     cout << "\n";
    // }
    for (int i = 1; i < n; i++)
    {
        if (!vis[i])
        {
            bfs(i);
        }

        cout << "\n";
    }

    return 0;
}