
//there is two type of approch 
//aproch - 1
//iterating from back and then reversing the answer
// approch - 2
// iterating from from using string and knowing its length

// time is same for both the approch is o(n) n - length of entered number or _STRING_CONVERSIONS_H


#include<iostream>
#include<string>
using namespace std;

int binary_to_decimal(int n){
    int ans = 0;
    int x = 1;
while(n>0){

    int r  = n%10;
    ans = ans + r*x;
    x *= 2;
    n /= 10;
}
return ans;


}
int octal_to_decimal(int n){
    int ans = 0;
    int x = 1;
while(n>0){

    int r  = n%10;
    ans = ans + r*x;
    x *= 8;
    n /= 10;
}
return ans;


}

int hexadecimal_to_decimal(string s){
    int ans = 0;
    
    int i = 0;
    int idx = s.length();
    cout<<idx;
do{
    if((s[i]-'0')>= 0 && (s[i]-'0')<= 9){
        ans  += (s[i]-'0')*pow(16,idx-i);

    }
    else if((s[i]-'0') >= 'A' && (s[i]-'0')<= 'F'){
        ans += (s[i]-65+10)*pow(16,idx-i)

    }

    
   i++;

}while(s[i]!=s[idx])
return ans;


}

int reverse(int n){
    int ans = 0;
   
while(n>0){

    int r  = n%10;
    ans = ans*10 + r;
   
    n /= 10;
}
return ans;


}



int decimal_to_octal(int n){
    int ans = 0;
    
while(n>0){

    int r  = n%8;
    ans = ans*10 + r;
    
    n /= 8;
}
ans = reverse(ans);

return ans;


}
int decimal_to_binary(int n){
    int ans = 0;
    
while(n>0){

    int r  = n%2;
    ans = ans*10 + r;
    
    n /= 2;
}
ans = reverse(ans);

return ans;


}
int decimal_to_hexdecimal(int n){
    string ans = 0;
    
while(n>0){

    int r  = n%16;
    if(r>=0 && r<=9){
        ans = ans + r;
    
    n /= 16;

    }
    else if(r>=10 && r<=15){
        ans = ans + (r+55);
    
    n /= 16;


    }
    
}
ans = reverse(ans);

return ans;


}






int main(){

    
    int from;
    cout<<"enter from which u r converting:";
    cin>>from;
    int to;
    cout<<"\nenter to which u want to convert:";
    cin>>to;
    cout<<"\n";
    if(from == 2 && to == 8){

        int n;
        cin>>n;
        int ans =  binary_to_decimal(n);
        cout<<decimal_to_octal(ans);

       
    }
    else if(from == 2 && to == 10){
         int n;
        cin>>n;
        binary_to_decimal(n);
    }
else if(from == 2 && to == 16){
     int n;
        cin>>n;

       int ans =  binary_to_decimal(n);
        cout<<decimal_to_hexadecimal(ans);
    }

else if(from == 10 && to == 8){
     int n;
        cin>>n;
        cout<<decimal_to_octal(n);
    }
else if(from == 10 && to == 2){
     int n;
        cin>>n;
        cout<<decimal_to_binary(n);
    }
else if(from == 10 && to == 16){
     int n;
        cin>>n;
        cout<<decimal_to_hexadecimal(n);
    }
else if(from == 8 && to == 10){
     int n;
        cin>>n;
        octal_to_decimal(n);
    }
    else if(from == 8 && to == 2){
     int n;
        cin>>n;
       int ans =  octal_to_decimal(n);
        cout<<decimal_to_binary(ans);
    }
    else if(from == 8 && to == 16){
     int n;
        cin>>n;
       int ans =  octal_to_decimal(n);
        cout<<decimal_to_hexadecimal(ans);
    }
    else if(from == 16 && to == 10){
     string n;
        cin>>n;
       cout<<hexdecimal_to_decimal(n);
    }
     else if(from == 16 && to == 2){
      string n;
        cin>>n;
        int ans =  hexadecimal_to_decimal(n);
        cout<<decimal_to_binary(ans);
    }
     else if(from == 16 && to == 8){
      string n;
        cin>>n;
        int ans =  hexadecimal_to_decimal(n);
        cout<<decimal_to_octal(ans);
     }
else{
    cout<<"invalid input";
}

    


return 0;

}