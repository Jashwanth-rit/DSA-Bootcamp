#include<iostream>
#include<string>
using namespace std;
int maxarr(int a[],int n){
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = max(ans,a[i]);
    }
    return ans;
}

int main(){

    // int n;
    // int a[n];
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    int a[] = {1,2,3,4,5,3,2,1};
    
    int m = maxarr(a,8);
    int vis[m];
    for(int i = 0;i<m;i++){
        vis[i] = -1;
    }
    int ans = 50000;
    
    for(int i=0;i<8;i++){
        if(vis[a[i]]==-1){
            vis[a[i]] = i;

        }
        else{
            ans = min(ans,vis[a[i]]);

        }

    }
    cout<<ans<<" "<<a[ans];
    return 0;
}