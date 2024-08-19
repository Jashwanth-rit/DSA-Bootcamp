#include <bits/stdc++.h>
#include <iostream>
#include<stack>

using namespace std;

int presidence(char c){
    switch(c){
        case '^':return 3;
        case '*':
        case '/': return 2;
        case '+':
        case '-': return 1;
        
        default: return -1;
    }
    return 0;
}
void reverse(string s,string *ans){

    if(s.size() == 0){
        return ;
    }
reverse(s.substr(1),ans);
*ans+=s[0];
 }

int main()
{

    string n;
    cin >> n;
    stack<char> st;
    string s = "";
    string ans;
    reverse(n,&s);


    for (int i = 0; i < s.length(); i++)
    
    {
        
        
        if (((s[i] - '0') > 'a' && (s[i] - '0') < 'z') || ((s[i] - '0') > 'A' && (s[i] - '0') < 'Z'))
        {
            ans += s[i];
        }
        else if (s[i] == ')')
        {
            st.push(s[i]);
        }
        else if (s[i] == '(')
        {
           

            while (!st.empty() && st.top() != ')')
            {
                ans += st.top();
                 st.pop();
            }
            if(!st.empty())
            st.pop();
        }

        else{
            while(!st.empty() && presidence(st.top())>presidence(s[i])){
                ans += st.top();
                st.pop();

            }
            st.push(s[i]);
        }
        
    }

    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    cout<<ans<<" ";
     string a = "";
     reverse(ans,&a);


    cout<<a<<" ";
    return 0;
}