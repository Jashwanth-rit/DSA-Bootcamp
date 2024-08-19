
//program to sort an array of string according to there alphabetic

#include<iostream>
#include<cstring>

using namespace std;

 
 


int main(){
    // cout<<strcmp("mango","banana");

    // string s1 = "jk";
    // string s2;
    // strcpy(s2,s1);
    // cout<<s2;

    char s[][100] = {"mango","banana","apple","graphs","chako","greenapple"};
    int n = sizeof(s)/sizeof(s[0]);
    for(int i=0;i<n;i++){

        for(int j=i+1;j<n;j++){

            if(strcmp(s[i],s[j])>0){

                swap(s[i],s[j]);
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<s[i]<<" ";

    }


return 0;

}