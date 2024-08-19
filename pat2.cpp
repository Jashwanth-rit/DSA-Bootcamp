#include<iostream>
#include<string>
using namespace std;
int main(){

    int n;
    cout<<"enter the value:";
    cout<<"\n";
    cin>>n;
    int c = 0;
    char a = 65;
    int k = 0;
    
    for(int i=1;i<=(n);i++){
         c = 0;
         k=0;
        for(int j=0;j<(2*n-1);j++){
           if(j<(n-i)){
            cout<<" ";
            cout<<" ";
           }
           else if(j<n){
            c++;
            k++;
            cout<<char(a+k-1);
            cout<<" ";

           }
           else if(j>=n && --c>0){
            k++;
            cout<<char(a+k-1);
            cout<<" ";
           }
           else{


           }
          
            
        }
        cout<<"\n";

    }

for(int i=(n-1);i>0;i--){
         c = 0;
         k=0;
        for(int j=0;j<(2*n-1);j++){
           if(j<(n-i)){
            cout<<" ";
            cout<<" ";
           }
           else if(j<n){
            c++;
            k++;
            cout<<char(a+k-1);
            cout<<" ";

           }
           else if(j>=n && --c>0){
            k++;
            cout<<char(a+k-1);
            cout<<" ";
           }
           else{


           }
          
            
        }
        cout<<"\n";

    }


return 0;

}