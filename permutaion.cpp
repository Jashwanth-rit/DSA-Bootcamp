#include<iostream>
#include<string>
using namespace std;

void permutation(string s,string ans){

    if(s.length()==0){
        cout<<ans<<" ";
        return ;

    }

    for(int i=0;i<s.length();i++){
        char ch = s[i];
        string res = s.substr(0,i)+s.substr(i+1);
        permutation(res,ans+ch);

    }


}



int main(){

    string s;
    cin>>s;
    permutation(s,"");




    return 0;

}