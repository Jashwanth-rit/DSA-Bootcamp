#include<iostream>
#include<vector>
using namespace std;
// int main()
// {
    
//     int n;
//     cin>>n;
//     vector<int> a(n);
//     int k;
//     cin>>k;
   
//     for(auto &i : a)
//     cin>>i;
//     int z=0,i=0,ans=0;
//     for(int j=0;j<n;j++){
//         if(a[j]==0)
//         z++;
//         while(z>k){
//             if(a[i]==0){
//             z--;
//         }
        
//             i++;
//         }
// ans=max(ans,j-i+1);
//         }
//         cout<<ans;

//         return 0;

    // }

    //my approch
    int main()
{
    
    int n;
    cin>>n;
    vector<int> a(n);
    int k;
    cin>>k;
    int p1 = 0;
    int p2 = 0;
    for(auto &i : a)
     cin>>i;
     int x = 0;
     int ans = 0;
   
   for(int i=0;i<n;i++){


    if(a[p2+1] == 1){
        p2++;
    }
    else if(a[p2+1] == 0){
        if(x>k){
            if(a[p1]){
                p1++;
               

            }
            else{
                p1++;
                x--;
            }
           

        }
        else{
            x++;
            p2++;
        }

    }
    // cout<<p2<<" "<<p1<<" ";
    // cout<<(p2-p1)<<" ";
    ans = max(ans,p2-p1);
   }
        cout<<ans;

        return 0;
}

