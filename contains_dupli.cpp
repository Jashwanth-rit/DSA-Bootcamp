#include<iostream>
#include<vector>
#include<limits>
#include <bits/stdc++.h>
using namespace std;

bool check_dup(int nums[],int n){
     
        //  int n = nums.length();
       int mx = INT_MIN;
        int mn = INT_MAX;
        for(int i=0;i<n;i++){
            mx = max(mx,nums[i]);
            mn = min(mn,nums[i]);
        }
        
        
int m = 2*mx;
        int idx[m];
         for(int i=0;i<m;i++){
            idx[i] = 0;
         }

        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                if(idx[nums[i]]){
                
                
                return true;
            }
            else{
               
                idx[nums[i]]++;
                
            }

            }
            else{
                 if(idx[mx-(nums[i])]){
                
                
                return true;
            }
            else{
               
                idx[mx-(nums[i])]++;
                
            }
                
                 
                


            }
            
        }
        return false;
        
        
}
int main(){


    
    int a[] = {1,-2,2,3};
    if(check_dup(a,4)){
        cout<<"yes";
    }
    else{
        cout<<" no";
    }
    return 0;
}