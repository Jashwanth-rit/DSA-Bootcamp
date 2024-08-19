
//program to print pascal triangle till n row

#include<iostream>
#include<string>
#define INT16_MAX 32767
using namespace std;
int d[500];
int p[500][500];

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    if(d[n]!=-1){
        return d[n];
    }
   return d[n] = factorial(n-1)*n;
     
}

int pascal(int i,int j){

return   factorial(i)/(factorial(j)*factorial(i-j));
}
int main(){

    int n;
    cout<<"enter the value:";
    cout<<"\n";
    cin>>n;
    for(int i=0;i<n;i++){
         for(int j=0;j<=i;j++){
           

            cout<<pascal(i,j);
            cout<<" ";
        
    }
    cout<<"\n";
    }


return 0;

}