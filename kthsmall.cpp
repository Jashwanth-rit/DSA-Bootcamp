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
 int max_idx(int a[],int n){
       
        int mn = INT_MAX;
        int idx = 0;
        for(int i = 0;i<n;i++){
            if(mn>a[i]){
                mn = a[i];
                idx = i;
            }
        }
        return idx;
    }
 int kthSmallest(int a[], int l, int r, int k) {
        int idx;
        
        for(int i = 0 ;i<=(k);i++){
            for(int i = 0;i< r+1 ;i++){
                cout<<a[i]<<" ";
            }
            cout<<"\n";
            idx =  max_idx(a,r+1);
            if(i == k){
                break;
            }
            else{
                a[idx] = INT_MAX;
                
            }
        }  
        
        return a[idx];
    }
    
   
int main()
{
int a[6]= {7,10,4,3,5,20};
    cout<<kthSmallest(a,0,5,3);

    return 0;
}

