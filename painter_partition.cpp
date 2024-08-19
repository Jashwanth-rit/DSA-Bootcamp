#include<iostream>
#include<vector>
#include<limits>
#include <bits/stdc++.h>
#define for(i,a,b) for(int i = a;i<b;i++)
#define rof(i,a,b) for(int i = a;i>=b;i--)
#define ret return
#define mii map<int,int>

#define vi vector<int>
#define mvi map<int,vi>
#define vvi vector<vi>
#define pii pair<int,int>
#define ms multiset<int>
#define set set<int>
#define setg set<int,greater<int>>
#define msp multiset<pii>
#define vpi vector<pii>
#define f first
#define s second
#define it iterator


using namespace std;
int isfind(vi &a,int n,int mid){
    int s = 0,p = 1;
    for(i,0,n){
        s += a[i];
        if(s>mid){
            s = a[i];
            p++;
        }

    }
    ret p;

}

int partition(vi &a,int n,int p){

int sum = 0;
int mx = INT_MIN;
    for(i,0,n){
        mx = max(mx,a[i]);

        sum += a[i];
        
    }
    int l = mx,h = sum;
    while(l<h){
        int m = (l+h)/2;
        int painter = isfind(a,n,m);

        if(painter <= p){
            h = m-1;
        }
        else{
            l = m+1;
        }
    }
    ret l;
    
}
int main(){
    vi a = {40,30,20,60,90,100};
    cout<<partition(a,6,4);

    ret 0;
}