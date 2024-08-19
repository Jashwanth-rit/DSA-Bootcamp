
// program to push all zeros in array to last 
// input n = 6
//       a = {1,0,1,0,1,0}
// output 
// {1,1,1,0,0,0}

// do using two pointer and try


#include<iostream>
#include<string>

using namespace std;

 
 


int main(){

int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<(n/2+1);i++){

   

         for(int j=n-1;j>i;j--){
            if(a[i]!=0){
                break;
            }
            if(a[j]!=0){
                cout<<a[i]<<i<<" "<<a[j]<<j<<"\n";
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;

            }

    
    }
        
    

   
}

for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}


   
return 0;

}