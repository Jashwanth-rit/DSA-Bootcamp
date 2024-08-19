
// program to check whther the number is armstrong or not
// example for armstrong is 153 = 1^3 + 5^3 + 3^3
// sum of cubes of each digit is equal to same number then it is called as armstrong
// logic - accessing each digit in ginen number

#include<iostream>
#include<string>

using namespace std;

int multi(int n,int i){
    int ans = 1;
    for(int j=0;j<i;j++){
ans*=n;
    }
    return ans;
}

//approch -1

// bool armcheck(int n){

// int n1 = n;
// int ans = 0;

// while(n1!=0){
//     int rem = n1%10;
//     ans+=multi(rem,3);
//     n1/=10;
// }
// cout<<ans;
// if(ans==n){
//     return true;

// }
// else{
//     return false;
// }

// }


//approh - 2 (using recursion)

int armcheck(int n,int val){

    if(n == 0){
        return 1;
    }

    return multi(val,3)+armcheck(n/10,n%10);
} 
 

 

int main(){
int n;
cin>>n;

int val = 0;
int ans = armcheck(n,val);
cout<<ans;

//printing whether it is equal or not by using returned value

if(n == ans){
    cout<<"yes";

}
else{
    cout<<"no";

}



   
return 0;

}