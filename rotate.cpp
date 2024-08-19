

//program to rotate 1D array  by k terms

#include<iostream>
#include<string>
#include<vector>
#define INT16_MAX 32767
using namespace std;
int main(){
int n;
cin>>n;
   vector<int> v(n);
   vector<int> v1(n);
   
   int k;
   for(int i =0;i<n;i++){
    cin>>v[i];
   }
   cout<<"ele are:";
   for(auto i:v ){
    cout<<i;
    
   }
   cout<<"enter the value of k:";
   cout<<"size:"<<v.size();
   cin>>k;
   int j=0;
for(int i=0;i<(v.size());i++){
    
    if(i < (v.size()-k)){
      v1[i+k]=v[i];
    }
    else{
        v1[j]=v[i];
        j++;

    }
}
// int j=0;
// for(int i=0;i<(v.size()-k);i++){
    
    
//       v1[i+k]=v[i];
    
// }

// for(int i=(v.size()-k);i<(v.size());i++){
    
//     v1[j]=v[i];
//     j++;
     
    
// }
cout<<"ele are:";
   for(auto i:v1 ){
    cout<<i;
    cout<<" ";
    
   }


approch 2 -  can also be done by reversing till k and other 
and revresing whole array
    


return 0;

}