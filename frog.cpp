

//program to find minimum jump that can be done to reach end
// *jump can be done to next or next of next 
// *adding the difference of jumped array and previous array 
// *that added value should be minimum and we should find it

// input - n = 4
// { 20 30 50 30}
// output - 10
// jump1 - 30 -20 and  jump2 -  30 -30


#include<iostream>
#include<string>

using namespace std;

 
 int absol(int n){
    if(n<0){
        return -n;
    }
    else{
        return n;
    }
 }
int frogjump(int a[],int i,int idx,int n){
    if(idx >= n-1 || idx>=n-2){
        return 0;

    }
//cout<<"entered frogjump"<<a[idx]-a[idx+1]<<"\n";
int ans = a[i]-a[idx];
int ans2 = a[i]-a[idx+1];

if(ans<0){
    ans = -(ans);
}
//cout<<ans<<" ";
    return min(min(ans+frogjump(a,idx,++idx,n),ans+frogjump(a,0,idx+2,n)),min(ans2+frogjump(a,idx+1,++idx,n),ans+frogjump(a,idx+1,idx+2,n)));
}
   
   


int main(){

int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
//cout<<-(a[0]-a[1]);
cout<<frogjump(a,0,1,n);



   
return 0;

}