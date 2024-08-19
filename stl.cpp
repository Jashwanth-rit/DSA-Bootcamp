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
#define mapsb map<string,bool>
#define mapss map<string,string>
#define mapvi map<int,vi>
#define mappi map<int,pii>
#define map map<int,int>
#define umap unordered_map<int,int>

#define msp multiset<pii>
#define vpi vector<pii>
#define f first
#define s second
#define it iterator

using namespace std;
int main()
{

    
    

    // set stl
    //  set s;

    // int n;
    // cin>>n;
    // r(i,0,n){
    //     s.insert(i);
    // }
    //  set::iterator it;
    //  for(it = s.begin();it<ss.end();it++){
    //     cout<<*it<<" ";
    //  }
    // for(int i : s){
    //     cout<<i<<" ";
    // }

    // vector stl
    //  vi v(10);
    //  for(int &i : v){
    //      cin>>i;
    //  }
    //  for(int i:v){
    //      cout<<i<<" ";
    //  }

    // note: set and multiset are almost same

    // vector of vector stl

    // vvi v(3, vi(3));

    // for (vvi ::iterator i = v.begin(); i < v.end(); i++)
    // {
    //     for (vi ::iterator j = i->begin(); j < i->end(); j++)
    //     {
    //         cin >> *j;
    //     }
    // }

    // for (const auto &row : v)
    // {
    //     for (int val : row)
    //     {
    //         cout << val << " ";
    //     }
    //     cout << endl; // New line after each row
    // }
    // for (vvi ::iterator i = v.begin(); i < v.end(); i++)
    // {
    //     for (vi ::iterator j = i->begin(); j < i->end(); j++)
    //     {
    //         cout << *j << " ";
    //     }
    // }

    // vector of pair stl

    // vpi v(5);

    // vpi ::it i;
    // for (i = v.begin(); i < v.end(); i++)
    // {
    //     int x;
    //     cin >> x;
    //     i->f = x;
    //     int y;
    //     cin >> y;
    //     i->s = y;
    // }
    // // for(auto &i : v){
    // //         cin>>(i.f)>>(i.s);
    //     }
    // for(const auto &i : v){
    //     cout<<i.f<<" "<<i.s;
    //     cout<<"\n";
    // }
    // vpi :: it i;
    // for (i = v.begin(); i < v.end(); i++)
    // {
    //     cout << (i->f) << " " << (i->s);
    //     cout << " ";
    // }

    //  note:
    //  here if we use iterator then use arrow mark in pair and use * for printing
    //  if use const auto of iteration then use dot operator and use address operator

    //  for input use auto only
    //  for ouput use const auto with address operator


// multiset of pair stl 


//     msp n;
//     int k;
//     cin>>k;
    
//     far(i,0,k){
//         int fi,sec;
//         cin>>fi>>sec;
//         n.insert({fi,sec});
//     }

//     for(const auto &i:n){
//         cout<<i.f<<" "<<i.s;
//         cout<<"\n";
//     }
//     note : 
//     we cant input like vector of pair we should use insert operator to input set or 
//     multiset because it will be as sorted way and with flower brase

// // note:

//     // multiset pair is sorted according to key value of pair
//     // multiset of pair can replace map
//     // allow duplicates


//map stl

// map s;
// int n;
// cin>>n;
// far(i,0,n){
//     int k,v;
//     cin>>k>>v;
//     s[k] = v;
// }


// for(const auto &i : s){
//     cout<<i.f<<" "<<i.s;
//     cout<<"\n";
// }

// note :
// map consist key and value two input ans key and value shoul be unique 
// it will be sorted in increasing order of key 
// do not allow any duplictes
// first will be stored in key an second in stored in value 
// it also combination of 
// vector of pair but not sorted allow duplicates
//  and also multiset of pair allow duplicates but sorted 
//  no declaration of size to map


//map of vector

// map<int,vi> m;
// int n;
// cin>>n;
//  far(i,0,n){
//     int k,v;
//     cin>>k>>v;
//     s[k].push_back(v);
// }
// for(const auto &i : m){
//     for(const auto &j : i.s){
//         cout<<j<<" ";
//     }
//     cout<<"\n";
// }

// map of pair

map<int,pi> m;
int n;
cin>>n;
  far(i,0,n){
    int k,v;
    cin>>k>>v;
    s[k].push_back(v);
}
 for(const auto &i : m){
    for(const auto &j : i.s){
        cout<<j<<" ";
    }
    cout<<"\n";
}




    return 0;
}