#include<iostream>
#include<string>
#include<vector>
#include<limits>
#define INT16_MAX 32767
#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> A = {1,1};

    int n = A.size();
   // cout<<n;
    int mx = INT_MIN;
    int mn = INT_MAX;
    
    for(int i=0;i<n;i++){
        mx = max(mx,A[i]);
        mn = min(mn,A[i]);
        
        
    }
    mx = mx+1;
   vector<int> fre(mx,0);
    for(int i=0;i<n;i++){
       fre[A[i]]++;
        
    }
    
    vector<int> v(2,0);
    //cout<<mn<<" "<<mx;
    
    for(int i=mn;i<mx;i++){
        if(fre[i]==0){
            
            v[1] = i;
           
            
        }
        else if(fre[i]==2){
            v[0] = i;
            
        }
        
        
    }
    if(mn>=1){
        v[1] = 1;
    }
    if(mx<(n-1)){
        v[1] == n-1;
    }
    cout<<v[1]<<" "<<v[0]<<" ";
    return 0;
}