
//program to print rectangle sum of rectangle which is formed by joining two coordinates


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
    int l1,l2,r1,r2;
    cin>>l1>>r1;
    int sum = 0;
    cin>>l2>>r2;

    //first approch

    for(int i=r1;i<=r2;i++){
        sum += a[l1][i];
        cout<<a[l1][i]<<" ";
    }
    cout<<"\n";
    l1 += 1;
     for(int i=l1;i<=l2;i++){
        sum += a[i][r2];
        cout<<a[i][r2]<<" ";
    }
    cout<<"\n";
    r2--;
    
    for(int i=r2;i>=r1;i--){
        sum += a[l2][i];
        cout<<a[l2][i]<<" ";
    }
    cout<<"\n";
    l2--;
   
     for(int i=l2;i>=l1;i--){
        sum += a[i][r1];
        cout<<a[i][r1]<<" ";
    }
    cout<<"\n";


//second approch
 for(int i=l1;i<l2;i++){
         for(int j=r1;j<r2;j++){
           
sum+=a[i][j];
           
        
    }
    
    }
    
    
    cout<<sum;
    
return 0;

}