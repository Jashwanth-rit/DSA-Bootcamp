
//program to print sum of subarray formed by array 

#include<iostream>
#include<string>

using namespace std;

 
 void subsum(int a[],int i,int sum,int n){

    if(i>=n ){
        cout<<sum<<" ";
        return ;
    }
    
    
    subsum(a,i+1,sum+a[i],n);
    subsum(a,i+1,sum,n);


 }


int main(){

int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
//cout<<-(a[0]-a[1]);
subsum(a,0,0,n);



   
return 0;

}