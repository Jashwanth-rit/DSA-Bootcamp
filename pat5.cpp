#include<iostream>
#include<string>
#define INT16_MAX 32767
using namespace std;
int main(){

    int n;
    cout<<"enter the value:";
    cout<<"\n";
    cin>>n;
    int N = 0;
    int c = 0;
    for(int i=1;i<=n;i++){
        N += i;
    }
    
    int p = 0;

int a[N];
        for(int j=2;j<1000;j++){
            bool y = false;
            for(int k=2;k<j;k++){
                if((j%k)==0){
                    y = true;
                    break;

                }
                
            }
            if(!y){

                a[p]=j;
                p++;

            }
            if(p==N){
                break;
            }

        }
        
    int s = 0;
    for(int i=1;i<=(n);i++){
        c=0;

        for(int j=1;j<(2*n-1);j++){

            if(j<(n-i)){
            cout<<" ";
             cout<<" ";
            
           }
          else{
            c++;
            cout<<a[s];
             cout<<" ";
            s++;

          }
          if(i==c){
            break;
          }
            
        }
        cout<<"\n";

    }


return 0;

}