
//program to find the gcd of two entered number 

#include<iostream>
#include<string>

using namespace std;

 

   int gcd(int a,int b){


    if(b == 0){
        return a;
    }
    return gcd(b,a%b);

   }
   


int main(){
int n,m;
cin>>n>>m;
int x,y;
x = max(n,m);
if(x == n){
    y=m;
}else{
    y = n;
}
int ans = gcd(x,y);
cout<<ans;




   
return 0;

}