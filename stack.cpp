#include<iostream>
using namespace std;
#define n 100
class stack {
    int* arr ;
int top;
public : 
stack(){
    arr = new int (n);
    top = -1;
}
void push(int x)
{
    if(top!=n-1){
        top++;
        arr[top]=x;
    }
    else{
        cout<<"stack is full"<<endl;
    }

}
void pop(){
    if(top!=-1){
    top--;
    }
    else{
        cout<<"ele not there"<<endl;
    }

}
int tope(){
    if(top!=-1){
        cout<<arr[top]<<endl;
        return 0;
    }
    cout<<"stack is epty"<<endl;
    return 0;
}
int  empty(){
    if(top==-1){
       cout<<"empty"<<endl; 
    }
cout<<"present "<<endl; 
return 0;
}
};
int main(){
    stack s;
    s.push(1);
     s.push(2);
      s.push(3);
       s.push(4);
        s.push(5);
        s.pop();
        s.tope();
        s.empty();
        return 0;
}
