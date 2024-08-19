#include<iostream>
#include<string>
using namespace std;
int main(){

    int n;
    cout<<"enter the value:";
    cout<<"\n";
    cin>>n;
    for(int i=0;i<(2*n-2);i++){

        for(int j=0;j<n;j++){

           
                
            if( i != 4 && j==2){
cout<<"*";
            }
            else if(i == 4){
                cout<<"*";
            }
            else if(i ==0 || i == 3 || i == 5){
                break;
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<"\n";

    }


return 0;

}