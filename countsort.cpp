#include <bits/stdc++.h>
#include<iostream>

using namespace std;



int main(){

    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    int n = 6;
    int a[n] = {3,2,4,3,5,2};
    int mx = 0;

    for(int i=0;i<n;i++){
        mx = max(mx,a[i]);
    }
    
    int count[mx+1] = {0};
    cout<<mx<<" ";
    for(int i=0;i<n;i++){
        
        count[a[i]]++;
    }
    
int ans[n];
int j=0;
for(int i=0;i<=mx;i++){
    while((count[i]--)){
        ans[j++] = i;
        

    }

}

for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }





    return 0;
}