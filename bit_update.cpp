


#include<iostream>
#include<string>
using namespace std;

int reverse(int n){
    int ans = 0;
   
while(n>0){

    int r  = n%10;
    ans = ans*10 + r;
   
    n /= 10;
}
return ans;


}

int decimal_to_binary(int n){
    int ans = 0;
    
while(n>0){

    int r  = n%2;
    ans = ans*10 + r;
    
    n /= 2;
}
ans = reverse(ans);

return ans;


}

int bit_update(int n,int i,int val){


    int ans = (n&(~(1<<i)));
    ans = (ans|(val<<i));

    return ans;
}


int main(){

    int n;
    cin>>n;
    
    int i;
    cin>>i;

   
    int val;
    cin>>val;
    cout<<n<<" in binary number system "<<decimal_to_binary(n)<<"\n";
     cout<<"for "<<i<<"th place add "<<val<<"\n";
    
    cout<<bit_update(n,i,val);




    return 0;

}