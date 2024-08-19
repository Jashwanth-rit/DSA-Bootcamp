#include <bits/stdc++.h>
#include<iostream>

using namespace std;
// void bucketsort(float a,int n,int pos)
// {
//    int count[10] = {0};
//     for(int i=0;i<n;i++){
//         count[int(a[i]*pos)]++;

//     }
//     for (int i = 1; i < 10; i++) {
//         count[i] += count[i - 1];
//     }
//     float ans[10];

//     // Build the output array
//     for (int i = n - 1; i >= 0; i--) {
//         int digit = int(a[i]*pos);
//         ans[count[digit] - 1] = a[i];
//         count[digit]--;
//     }
    
     
    


// for(int i=0;i<n;i++){
//     a[i] = ans[i];
// }


// }




void redixsort(int* a,int n,int pos)
{
   int count[10] = {0};
    for(int i=0;i<n;i++){
        count[(a[i]/pos)%10]++;

    }
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }
    int ans[10];

    // Build the output array
    for (int i = n - 1; i >= 0; i--) {
        int digit = (a[i] / pos) % 10;
        ans[count[digit] - 1] = a[i];
        count[digit]--;
    }
    
     
    


for(int i=0;i<n;i++){
    a[i] = ans[i];
}


}



int main(){

    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    int n = 6;
    float a[n] = {0.3,0.2,0.4,0.3,0.5,0.2};
    int mx = 0;
    

    // for(int i=0;i<n;i++){
    //     mx = max(mx,a[i]);
    // }
    // int pos = 1;
// if(mx/pos>0){
//     while(mx/pos>0){
//         redixsort(a,n,pos);
        
//         pos *= 10;
//     }

// }
// else if(a[0]>0){
int count[10] = {0};
int pos = 10;
    for(int i=0;i<n;i++){
        count[int(a[i]*pos)]++;

    }
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }
    float ans[10];

    // Build the output array
    for (int i = n - 1; i >= 0; i--) {
        int digit = int(a[i]*pos);
        ans[count[digit] - 1] = a[i];
        count[digit]--;
    }
    
     
    


for(int i=0;i<n;i++){
    a[i] = ans[i];
}
    
        bucketsort(a,n,10);
        
        
    

}
else{
    countsort(a,n);

}
    
    
   

for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }





    return 0;
}