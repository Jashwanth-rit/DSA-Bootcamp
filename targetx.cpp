
//program to check whether element present or not using recursion

#include<iostream>
#include<string>
#define INT16_MAX 32767
using namespace std;
int d[500];
int p[500][500];


int target(int a[],int i,int n,int x){
    if(i == n){
        return false;
    }

    return a[i]==x || target(a,i+1,n,x);
}
int main(){

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cin>>x;

    if(target(a,0,n,x)){
        cout<<"target found";
    }else{
        cout<<"target not found";
    }

   return 0;
}