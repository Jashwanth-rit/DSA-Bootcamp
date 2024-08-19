
//program to rotate 2d array by 90 degreee

#include<iostream>
#include<string>
#define INT16_MAX 32767
using namespace std;
int d[500];
int p[500][500];


int main(){

    int n;
    cout<<"enter the value row:";
    cout<<"\n";
    cin>>n;
    int m;
    cout<<"enter the value col:";
    cout<<"\n";
    cin>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
           
cin>>a[i][j];
           
        
    }
    
    }
    for(int i=0;i<n;i++){
         for(int j=m-1;j>=0;j--){
           
cout<<a[j][i]<<" ";
           
        
    }
    cout<<"\n";
    
    }
    
return 0;

}