

//program to print highest 1s row present in 2d array

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
    int count = 0;
    int ans = 0;
    int idx = 0;
     for(int i=0;i<n;i++){
count = 0;
         for(int j=0;j<m;j++){
           
if(a[i][j]==1){
    count++;
}
           
        
    }

    if(ans<count){
        ans = count;
        idx = i;
    }
    
    }
cout<<"highest 1s is "<<ans<<"in"<<idx+1;

return 0;

}