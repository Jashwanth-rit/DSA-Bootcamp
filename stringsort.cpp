
//program to sort entered string by there alphabetical order

#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    string st ="";
    cout<<s[0]-0<<endl;

    for(int i=0;i<s.size();i++){
        for(int j=i+1;j<s.size();j++){
            if((s[j]-0)<(s[i]-0)){
                 s[j] = s[j]-s[i];
                 s[i]=s[i]+s[j];
                 s[j]=s[i]-s[j];
                
            }
        }
    }
    cout<<s;
    return 0;

}