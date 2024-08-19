//program to print sum of element of subarray formed by array by using presum

#include<iostream>
#include<string>
using namespace std;

int main(){

    int n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        if(a[i-1]!=-1){
a[i]+=a[i-1];
        }
        else{
            a[i]=a[i];
        }

    }

    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            cout<<a[j]-a[i]
        
    }

    }
    return 0;
}