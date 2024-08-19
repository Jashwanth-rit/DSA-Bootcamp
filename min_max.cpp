#include<iostream>
#include<vector>
#include<limits>
#include <bits/stdc++.h>
using namespace std;
int main(){

    int n = 6;
    int arr[n] = {1,2,3,4,5,6};
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i=0;i<n;i++){

        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
             min = arr[i];
        }

    }
    cout<<"minimum of array is "<<min<<"\n"<<"maximum of array is "<<max;
    return 0;
}