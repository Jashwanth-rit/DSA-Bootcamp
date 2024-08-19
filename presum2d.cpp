#include<iostream>
#include<string>
#define INT16_MAX 32767
using namespace std;
int d[500];
int p[500][500];

//recsum using presum 
//third approch

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
    //prefix sum for 2d

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
if(j > 0){
    a[i][j]+=a[i][j-1];

}
else{
    a[i][j]=a[i][j];

}
            
        }

    }
    int l1,l2,r1,r2;
    cout<<"enter l and r";
    cin>>l1>>r1;
    cin>>l2>>r2;
    cout<<a[l1][r2]-a[l1][r1-1]+a[l2][r2]-a[l2][r1-1];

    //forth approch can be done using double prefix 
    ///mean both row and coloum sum
    //sum = a[l2][r2]-a[l1-1][r2]-a[l2][r1-1]+a[l1-1][r1-1];
    
return 0;

}