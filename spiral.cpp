
//program to print the 2D array in spiral order

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
    int rs = 0,re = n,cs = 0,ce = m;
    int j=0,k=0;
    
int b[n][m];


    while(re != rs && ce!=cs){
        for(int i = cs;i<ce;i++){
            cout<<a[rs][i]<<" ";
            
            b[j][k++]=a[rs][i];
            
            if(k == 4){
                j++;
                k = 0;
            }


        }
        rs++;
        for(int i = rs;i<re;i++){
            cout<<a[i][ce-1]<<" ";
             b[j][k++]=a[i][ce-1];
            
            if(k == 4){
                j++;
                k = 0;
            }
        }
        ce--;
        for(int i = ce-1;i>=cs;i--){
            cout<<a[re-1][i]<<" ";
             b[j][k++]=a[re-1][i];
            
            if(k == 4){
                j++;
                k = 0;
            }
        }
        re--;
         for(int i = re-1;i>=rs;i--){
            cout<<a[i][cs]<<" ";
             b[j][k++]=a[i][cs];
            
            if(k == 4){
                j++;
                k = 0;
            }
        }
        cs++;
        

    }
    cout<<"\n";
   
     for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
           
cout<<b[i][j]<<" ";
           
        
    }
    cout<<"\n";
    
    }
return 0;

}