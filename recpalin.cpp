
//progam to check palindrom using pointer 

#include<iostream>
#include<string>

using namespace std;

 

 void reverse(string s,string *ans){

    if(s.size() == 0){
        return ;
    }
reverse(s.substr(1),ans);
*ans+=s[0];
 }

int main(){
string s;
cin>>s;


 string ans = ""; 
 reverse(s,&ans);

cout<<ans;



   
return 0;

}