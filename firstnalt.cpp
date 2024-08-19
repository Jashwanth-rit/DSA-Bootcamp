//program to print sum of first n alternate sum
// sum = 1 - 2 + 3 - 4 + 5 - 6 + 7 - 8 . . . .

#include<iostream>
#include<string>

using namespace std;

 

 int sumalt(int s,int idx){
    if(idx > s){
        return 0;
    }
    int sum = 0;
if(idx%2==0){
    sum = -idx;

}
else{
    sum = idx;
}
    
   
return sumalt(s,++idx)+sum;



 }

int main(){
int s;
int sum;
cin>>s;
int ans = sumalt(s,1);
cout<<ans;



   
return 0;

}