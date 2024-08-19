#include<iostream>
#include<vector>
#include<stack>

using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int> a(n);
    stack<int> ans;
    stack<pair<int,int>> s;
     for(auto &i : a)
    cin>>i;
    for( int i=0;i<n;i++){
        int day =1 ;
        while( !s.empty() && s.top().first<i){
            day+= s.top().second;
s.pop();

           
        }
        s.push({i,day});
        ans.push(day);
    }
   while(ans.top()!=-1){
    cout<<ans.top()<<" ";
    ans.pop();
   }
return 0;
}
