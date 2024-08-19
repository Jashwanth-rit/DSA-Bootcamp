
//program to check whether there exists two subarray of same sum and there exist partition of it

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
    // prefix sum
    for(int i=0;i<n;i++){
        if(a[i-1]!=-1){
a[i]+=a[i-1];
        }
        else{
            a[i]=a[i];
        }

    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
for(int i=0;i<n;i++){
    //formula 
        suf = a[n-1]-a[i];
        if(suf==a[i]){
cout<<"partition exist at"<<i<<endl;
        }
    }
    


return 0;

}