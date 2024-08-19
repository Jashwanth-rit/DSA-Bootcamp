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

int n;
cin>>n;
msp ans;
vi a(n);
for(auto &i : a){
    cin>>i;
}
int sum = 0;
int p1 = 0;
int k = 1;
//vi :: it p2
far(p2,0,n){
    sum += a[p2++];
    while(k<(p2-p1+1)){
        sum = sum - a[p1++];
       
    }
    if(k == (p2-p1+1) && (sum%3) == 0){
        ans.insert({p1,p2});
    }
}
for(const auto &i : ans){
    cout<<i.f<<" "<<i.s;
    cout<<"\n";
}
    return 0;
}