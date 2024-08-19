
//program to sort the array if array have sorted but only two element are swaped by mistake

#include<iostream>
#include<cstring>

using namespace std;

 
 


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    int firstidx = -1;

    for(int i=0;i<n;i++){

        if(a[i]<a[i-1] && a[i]>a[i+1]){

            if(firstidx == -1){
                firstidx = i;
            }
            else{
                int temp = a[firstidx];
                a[firstidx] = a[i];
                a[i] = temp;
                
            }

            
        }
    }
    
 for(int i=0;i<n;i++){
        cout<<a[i]<<" ";

    }
    

return 0;

}