
//program to print number of path from (0,0) to (n,n) in 2d array

#include<iostream>
#include<string>
#define INT16_MAX 32767
using namespace std;
int d[500];
int p[500][500];

int numpath(int a[][100],int i,int j,int n,int m){


    if(i == n-1 && j == m-1){
        return 1;
    }
    if(i>=n || j>=m){
        return 0;
    }
    return (numpath(a,i+1,j,n,m)+numpath(a,i,j+1,n,m));
}

int main(){

    int n;
    cout<<"enter the value row:";
    cout<<"\n";
    cin>>n;
    int m;
    cout<<"enter the value col:";
    cout<<"\n";
    cin>>m;
    int a[100][100];
    for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
           
cin>>a[i][j];
           
        
    }
    
    }
    cout<<numpath(a, 0, 0, n, m);
    
return 0;

}