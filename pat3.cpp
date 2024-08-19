
#include<iostream>
#include<string>
using namespace std;
int main(){

    int n;
    cout<<"enter the value:";
    cout<<"\n";
    cin>>n;
    int c = 0;
    for(int i=1;i<=n;i++){
         c = 0;
        for(int j=0;j<(2*n-1);j++){
           if(j<(n-i)){
            cout<<" ";
           }
           else if(j<n){
            c++;
            cout<<c;

           }
           else if(j>=n && --c>0){
            
            cout<<c;
           }
           else{

           }
          
            
        }
        cout<<"\n";

    }


return 0;

}