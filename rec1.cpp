
//program to remove duplicates from entered string of entered character

#include<iostream>
#include<string>

using namespace std;

 

 string filter(string s){

    if(s.size() == 0){
        return "";
    }

string ans = "";
char ch = s[0];



    if(ch =='a'){

        ans = "";
        
    }
    else {
        ans = ch ;
    }


return ans+filter(s.substr(1));
 }

int main(){
string s;
cin>>s;
 string ans = filter(s);
cout<<ans;



   
return 0;

}