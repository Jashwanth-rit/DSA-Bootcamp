#include<iostream>
using namespace std;
void merge(int ar[],int l,int m,int e){
    int n1 = m-l+1;
    int n2 = e-m;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++){
a[i]=ar[l+i];

    }
    for(int i=0;i<n2;i++){
b[i]=ar[m+i+1];

    }
    int i=0,j=0;
    int k = l;
    while( i<n1 &&  j<n2){
if(a[i]<b[j]){
    ar[k]=a[i];
    k++;
    i++;
}
 else if(a[i]>b[j]){
    ar[k]=b[j];
    k++;
    j++;
}
else if(a[i]=b[j]){
    ar[k]=b[j];
    k++;
    j++;
}

    }
    while(i<n1){
        ar[k]=a[i];
    k++;
    i++;
    }
    while(j<n2){
        ar[k]=b[j];
    k++;
    j++;
    }

}
void mergesort(int arr[],int l,int r){
    if(l<r){
    int m=(l+r)/2;
    mergesort(arr,l,m);
    mergesort(arr,m+1,r);
    merge(arr,l,m,r);
    }
}
int main(){
    int a[]={3,2,4,1,5,7,4,7};
    mergesort(a,0,8);
    for(int i=0;i<8;i++){
        cout<<a[i]<<" ";
    }
        return 0;

    
}