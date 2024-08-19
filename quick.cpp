#include<iostream>
using namespace std;
void swap(int a[],int l,int r){
    int t = a[l];
    a[l]=a[r];
    a[r]=t;
}
int partition(int a[],int l,int r){
   int p = a[r];
    int j=0;
    int i= l-1;
    for(int J=l;j<r;j++){
        if(a[j]<p){
            i++;
            swap(a,i,j);
        }
    }
        swap(a,i+1,r);
        return i+1;


    
}
void quick(int a[],int l,int r){
    if(l<r){
        int p = partition(a,l,r);
        quick(a,l,p);
        quick(a,p+1,r);
    }
}
int main()
{
    int a[]={3,1,4,6,2,8,9};
    quick(a,0,7);
    for(int i=0;i<7;i++){
        cout<<a[i]<<" ";
    }
        return 0;
}
