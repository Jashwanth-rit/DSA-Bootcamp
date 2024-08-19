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

int main()
{

    string s;
    cin >> s;
    stack<char> st;
    string ans = "";
    for (int i = (s.length() - 1); i >= 0; i--)
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
    cout<<ans;
    
    return 0;
}