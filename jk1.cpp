#include<iostream>
#include<string>
using namespace std;
class student {
    int age;
    string name;
    float cgpa;
    public :
    student(string s,int a,float c){
        age =a;
        name =s;
        cgpa=c;

    }
    void out()
    {
        cout<<age<<endl;
         cout<<name<<endl;
          cout<<cgpa<<endl;
    }
    };
    


int main()
{
    student a("jk",2,8.5);
    a.out();
   
    return 0;
    
}