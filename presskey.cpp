#include<iostream>
#include<string>

using namespace std;

void print_press(string s[],string n,string ans){
    if(n.length()==0){
        cout<<ans<<" ";
        return;
    }
    int idx = n[0]-'0';
    string num = n.substr(1);
    string alpha = s[idx];
    for(int i=0;i<alpha.length();i++){


    print_press(s,num,ans+alpha[i]);


    }
}


 
 
 


int main(){


string s[] = {"abc","efg","hij","klm","nop","qrs","tuv","wxyz"};
string n;
string ans = "";
cin>>n;



    print_press(s,n,ans);



   
return 0;

}