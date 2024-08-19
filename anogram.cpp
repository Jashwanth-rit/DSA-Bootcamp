#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    string s1;
cin>>s1;
//  for(int i=0;i<s.size();i++){
//         for(int j=i+1;j<s.size();j++){
//             if((s[j]-0)<(s[i]-0)){
//                  s[j] = s[j]-s[i];
//                  s[i]=s[i]+s[j];
//                  s[j]=s[i]-s[j];
                
//             }
//         }
//     }
//      for(int i=0;i<s.size();i++){
//         for(int j=i+1;j<s.size();j++){
//             if((s[j]-0)<(s[i]-0)){
//                  s[j] = s[j]-s[i];
//                  s[i]=s[i]+s[j];
//                  s[j]=s[i]-s[j];
                
//             }
//         }
//     }
if(s.size() != s1.size()){
    return 0;
}
bool f = false;


for(int i=0;i<s.size();i++){
for(int j=0;j<s1.size();j++){
    if((s[i]) == (s1[j])){
        
        s1[j] = ' ';

        f = true;
        
        break;

    }
    
    else if(j == (s1.size()-1)){
        f = false;
        cout<<"not same "<<endl;
        return 0;
    }
}

}
cout<<"same number"<<endl;
return 0;
}
