#include<iostream>
#include<deque>
#include<vector>


using namespace std;
int main(){
    deque<int> q;
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    vector<int> ans;

    for(auto &i : a)
    cin>>i;
 //   cout<<"yes0"<<endl;
    for(int i=0;i<k;i++){
        while(!q.empty() && a[q.back()]<a[i]){
            q.pop_back();
            //cout<<"yes "<<endl;
        }
        q.push_back(i);
     //   cout<<"yes2"<<endl;

    }
    ans.push_back(a[q.front()]);
    for(int i=k;i<n;i++){
        if(q.front()==i-k){
            q.pop_front();
        }

 while(!q.empty() && a[q.back()]<a[i]){
            q.pop_back();
        }
        q.push_back(i);
         ans.push_back(a[q.front()]);
    }

for(auto i : ans){
    cout<<i<<" ";
}
return 0;
}
