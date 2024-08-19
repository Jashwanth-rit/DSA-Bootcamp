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

    // map fre;
    // int n;
    // cin >> n;
    // vi a(n);
    // for (auto &i : a)
    // {

    //     cin >> i;
    // }
    // // vi :: it i;
    // for (int i : a)
    // {
    //     fre[i]++;
    // }
    // // cout<<"out from fre count";
    // //  map :: it ip;
    // for (const auto &i : fre)
    // {

    //     cout << i.f << " " << i.s;

    //     cout << "\n";
    // }
    // // cout<<" \nexicuted";


    // // more than n/3 times

    // map fre;
    // int n;
    // cin >> n;
    // vi a(n);
    // for (auto &i : a)
    // {

    //     cin >> i;
    // }
    // // vi :: it i;
    // for (int i : a)
    // {
    //     fre[i]++;
    // }
    // // cout<<"out from fre count";
    // //  map :: it ip;
    // for (const auto &i : fre)
    // {
    //     if (i.s >= (n / 3))
    //     {
    //         cout << i.f ;
    //     }

    //     cout << "\n";
    // }


    //unioun of two array using set

    set s;
    map fre;
     int n;
    cin >> n;
    vi a(n);
    for (auto &i : a)
    {

        cin >> i;
        s.insert(i);
    }

 int m;
    cin >> m;
    vi a1(m);
    for (auto &i : a1)
    {

        cin >> i;
        s.insert(i);
    }
    
    for(int i : s){

        cout<<i<<" ";
    }

   // unioun using map


for(int i : a){
    fre[i]++;

}
for(int i : a1){
    fre[i]++;

}
cout<<"\n";

for(const auto &i : fre){
    
        cout<<i.f;
        cout<<"\n";
    
}


//intersection using map

for(int i : a){
    fre[i]++;

}
for(int i : a1){
    fre[i]++;

}
cout<<"\n";

for(const auto &i : fre){
    if((i.s) >= 2){
        
        cout<<i.f;
        cout<<"\n";
    }
}

//intersection using set


//doubt find : it can be done by using set of pair 

    return 0;
}