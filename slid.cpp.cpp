#include<iostream>
#include<vector>
#include<set>


using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    vector<int> ans;
    multiset<int,greater<int>> s;
    for(auto &i : a)
    cin>>i;
    for(int j=0;j<k;j++){
        s.insert(a[j]);
    }
    ans.push_back(*s.begin());
    for(int j=k;j<n;j++){
        s.erase(s.lower_bound(a[j-k]));
        s.insert(a[j]);
        ans.push_back(*s.begin());


    }
    for(auto i : ans){
        cout<<i<<" "<<endl;
    }

return 0;

}