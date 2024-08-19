#include<iostream>
#include<string>
#include<vector>
#include<limits>
#define INT16_MAX 32767
#include <bits/stdc++.h>
using namespace std;
int main(){

//     int a[] = {4,5,6,1,2,3};
//     int l = 0;
//     int h = 5;
//     int k = 6;


//     while(l<=h){
//         int m  = l+(h-l)/2;
//         if((a[l]+a[h]) == k){
//             cout<<"yes";
//             return 0;
//         }
//         else if((a[l]+a[h])<k){
//              if(a[l]<a[m]){
//                  l = m+1;
               

//         }
//         else{
//              h = m-1;
           

//         }

//         }
//         else{
//              if(a[l]<a[m] ){
//                 h = m-1;


//         }
//         else{
//             l = m+1;

//         }

//         }
        
//     }
//     cout<<" no";
//     return 0;
// }
int n = nums.size();
        int sum = 0;
        int idx[n-2];
        int j = 0;
        for(int i=0;i<3;i++){
            sum += nums[i];

        }
        if(sum == 0){
            idx[j++] = 3;

        }
        for(int i=3;i<n;i++){
            sum = sum - nums[i-3]+nums[i];
            if(sum == 0){
                idx[j++] = i;
            }
        }
int k = nums[0]-3;
vector<vector<int>> ans(3,vector<int>(n-1));
int p = 0;
        for(int i=0;i<n-1;i++){
            for(int j = k;j<nums[i];j++){

                ans[p][i]=nums[j];
                p++;
                if(p == 3){
                    break;

                }
                

            }

            k = (nums[i+1] - 3);
        }
        return ans;
            
}