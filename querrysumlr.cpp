
//program to find sum from l to r index


#include<iostream>
#include<string>
using namespace std;
int main(){

    int n;
    cout<<"enter the value:";
    cout<<"\n";
    cin>>n;
    int a[n];
    int suf = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        // cout<<"printing a[i-1]:";
        // cout<<a[i-1];
        // if(a[i-1]){

        // }
        // else{
        //     a[i]=a[i];
        // }
        
    }
    
    for(int i=0;i<n;i++){
        if(a[i-1]!=-1){
a[i]+=a[i-1];
        }
        else{
            a[i]=a[i];
        }

    }
    int l =1,r=1;
   while(l>=0 && r>=0){
    cout<<(a[r]-a[l-1]);
    cout<<"enter value of l and r";
    cin>>l;
    cin>>r;

   }

return 0;

}