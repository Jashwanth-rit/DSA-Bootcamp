
//program to print all the subsequence of entered string

#include<iostream>
#include<string>

using namespace std;

 
 void subsum(string s,string ans){

    if(s.length()==0 ){
        cout<<ans<<" ";
        return ;
    }
    char ch = s[0];
    
    subsum(s.substr(1),ans+ch);
    subsum(s.substr(1),ans);


 }


int main(){


string s;
string ans;
cin>>s;
//cout<<-(a[0]-a[1]);
subsum(s,ans);



   
return 0;

}