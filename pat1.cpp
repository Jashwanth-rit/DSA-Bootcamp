#include<iostream>
#include<string>
using namespace std;
int main(){

    int n;
    cout<<"enter the value:";
    cout<<"\n";
    cin>>n;
    for(int i=0;i<(n-1);i++){

        for(int j=0;j<n;j++){

            if((i+j+1)<n){
                cout<<(i+j+1);
                cout<<" ";

            }
           else  if((i+j+1)>n){
                cout<<((i+j+1)-n);
                cout<<" ";
                if(((i+j+1)-n)==6){
                    break;
                }
                
            }
            
        }
        cout<<"\n";

    }


return 0;

}