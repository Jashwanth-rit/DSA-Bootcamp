#include<iostream>
#include<string>
using namespace std;


int reverse(int n){
    int ans = 0;
   
while(n>0){

    int r  = n%10;
    ans = ans*10 + r;
   
    n /= 10;
}
return ans;


}

int bit_add(int n1,int n2){
int l1,l2,pc,ans;
pc = 0;
ans = 0;
    while(n1>0 && n2>0){
         l1 = n1%10;
         n1/=10;
         l2 = n2%10;
         n2/=10;
        if(l1 == 1 && l2 == 1){
            if(pc){
                ans = ans*10+1;
                pc = 1;

            }
            else{
                ans = ans*10+0;
                pc = 1;

            }
        }
        else if((l1 == 0 && l2 == 1)||(l1 == 1 && l2 == 0)){

             if(pc){
                ans = ans*10+0;
                pc = 1;

            }
            else{
                ans = ans*10+1;
                pc = 0;

            }
        }
        else if(l1 == 0 && l2 == 0){

             if(pc){
                ans = ans*10+1;
                pc = 0;

            }
            else{
                ans = ans*10+0;
                pc = 0;

            }
        }

    }
    while(n1>0){
        l1 = n1%10;
        n1/=10;
        if(l1){
            if(pc){
                ans = ans*10+0;
                pc = 1;

            }
            else{
                ans = ans*10+1;
                pc = 0;


            }

        }
        else{
             if(pc){
                ans = ans*10+1;
                pc = 0;

            }
            else{
                ans = ans*10+0;
                pc = 0;


            }

        }

    }
     while(n2>0){
        l2 = n2%10;
        n2/=10;
        if(l2){
            if(pc){
                ans = ans*10+0;
                pc = 1;

            }
            else{
                ans = ans*10+1;
                pc = 0;


            }

        }
        else{
             if(pc){
                ans = ans*10+1;
                pc = 0;

            }
            else{
                ans = ans*10+0;
                pc = 0;


            }

        }

    }
 ans = reverse(ans);

    return ans;

}


int main(){

int n1,n2;
cin>>n1>>n2;
cout<<bit_add(n1,n2);


    return 0;
}