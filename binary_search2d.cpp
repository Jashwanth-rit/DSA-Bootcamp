
//progam to check the target enter ed in given array

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            cin>>a[i][j];
        
    }
    }
    int x;
    cin>>x;

    int n1 = 0,n2 = 0;
    while(n1<=n-1 || n2<=m-1){

if(a[n1][n2]==x){
    cout<<n1<<" "<<n2;
    break;
}
else if(a[n1][n2]>x){
    if(a[n1-1][n2]==x){
        cout<<n1-1<<" "<<n2;
        break;
    }
    if(a[n1][n2-1]==x){
        cout<<n1<<" "<<n2-1;
        break;
    }
    n1--;
    n2--;
}
else if(a[n1][n2]<x){
     if(a[n1+1][n2]==x){
        cout<<n1+1<<" "<<n2;
        break;
    }
    if(a[n1][n2+1]==x){
        cout<<n1<<" "<<n2+1;
        break;
    }
    n1++;
    n2++;

}

    }
    return 0;
}