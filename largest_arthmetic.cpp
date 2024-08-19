#include<iostream>
#include<string>
using namespace std;

int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int pd = a[1]-a[0];
    int ans = 2,c = 2;
    int idx = 0;

   for(int i=1;i<n;i++){

    if(pd == a[i+1]-a[i]){
        c++;
    }
    else{
       
idx = i-c-1;
        

        
        pd = a[i+1]-a[i];
        c = 2;
    }

    ans = max(ans,c);

   }

   cout<<ans<<"\n";

   for(int i = idx;i<(ans+idx);i++){
    cout<<i<<"";
    cout<<a[i]<<" ";
    cout<<"\n";
   }
    return 0;
}