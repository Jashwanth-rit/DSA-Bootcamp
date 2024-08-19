#include<iostream>
using namespace std;
class base
{


public:
void print(){
    cout<<"ths is base print"<<endl;
}
void display(){
    cout<<"thi sis base display"<<endl;

}
};

class derived : public base
{


public:
void print(){
    cout<<"ths is derived print"<<endl;
}
void display(){
    cout<<"thi sis derived display"<<endl;

}
};
int main(){
    derived a;
    a.print();
    a.display();
    return 0;
}
