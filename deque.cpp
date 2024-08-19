#include <bits/stdc++.h>
#include <iostream>
#include<stack>
#define n 10

using namespace std;
class Deque{
    public:
    int* a;
    int front;
    int back;
    Deque(){
        a = new int[n];
        front = -1;
        back = -1;
    }
    void push_front(int val){

    if(front == -1 && back == -1){
        front++;
        back++;
        a[front] = val;
        return;
    }
    for(int i=back+1;i>front;i--){
        a[i] = a[i-1];
    }
    back++;
    a[front] = val;
    return;  
}
void push_back(int val){

     if(front == -1 && back == -1){
        front++;
        back++;
        a[front] = val;
        return;
    }
    if(back<(n-2)){
         back++;
    a[back] = val;


    }
   
    return;  
}
void pop_back(){

    if(back>-1)
    back--;

    return;
}
void pop_front(){

   for(int i = front;i<=back;i++){
    a[i] = a[i+1];
   }
   back--;

   
    return;
}
int front_val(){
    return a[front];
}
int back_val(){
    return a[back];
}
void display(){
    // cout<<"entered display"<<" ";
    // cout<<front<<" "<<back<<" ";
   
    for(int i=front;i<=back;i++){
        cout<<a[i]<<" ";
    }
}

};

int main(){
Deque dq;
dq.push_back(1);
dq.push_front(2);
dq.push_back(3);
dq.push_front(4);
dq.display();

dq.pop_back();
cout<<"after back pop"<<" ";
dq.display();
dq.pop_front();
cout<<"after front pop"<<" ";
dq.display();
cout<<"front val"<<dq.front_val()<<"back val "<<dq.back_val()<<" ";

    return 0;

}