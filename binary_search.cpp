#include <iostream>
#include <cstring>

using namespace std;

//program to return first index of target in sorted array approch - 1

int firstindex(int a[], int n, int l, int h, int x)
{
    int ans = 0;
    if (h >= l)
    {

        while (l <= h)
        {

            int mid = l + (h - l) / 2;

            if(a[mid]>=x){
                ans = mid;
                h = mid -1;
            }
            else{
                
                l = mid+1;
            }

            

            
           
        }
    }
    return ans;
}

//program to return last index of target in sorted array approch - 1

int lastindex(int a[], int n, int l, int h, int x)
{
    int ans = 0;
    if (h >= l)
    {

        while (l <= h)
        {

            int mid = l + (h - l) / 2;

            if(a[mid]<=x){
                ans = mid;
                l = mid +1;
            }
            else{
                
                h = mid-1;
            }

            

            
           
        }
    }
    return ans;
}


//program to print first and last index of target in sorted array

int findindex(int a[], int n, int l, int h, int x)
{

    //for first index
    if (h > l)
    {

        while (l != h)
        {

            int mid = l + (h - l) / 2;

            if (a[mid] == x)
            {

                for (int i = l; i <= mid; i++)
                {
                    if (a[i] == x)
                    {
                        return i;
                    }
                }
            }

            else if (a[mid] > x)
            {
                h = mid - 1;
            }
            else if (a[mid] < x)
            {
                l = mid + 1;
            }
        }
    }

     //for last index
    else
    {
        int temp = l;
        l = h;
        h = temp;
        while (l != h)
        {

            int mid = l + (h - l) / 2;

            if (a[mid] == x)
            {

                for (int i = h; i >= mid; i--)
                {
                    if (a[i] == x)
                    {
                        return i;
                    }
                }
            }

            else if (a[mid] > x)
            {
                h = mid - 1;
            }
            else if (a[mid] < x)
            {
                l = mid + 1;
            }
        }
    }
}


//rpogram to print index of peak element in montain type of array or maltiple montain type array

int peakindex(int a[], int n, int l, int h)
{
   

        while (l <= h)
        {

            int mid = l + (h - l) / 2;
            if(a[mid]>a[mid-1] && a[mid]>a[mid+1]) return mid;
            if(a[mid]>a[mid-1] ){
                l = mid+1;
            }
                else{
                    h = mid-1;
                    
                }

        } 
            
        return -1;

    } 

//  program to print index of target-element in rotated sorted array


int targetindex(int a[], int n, int l, int h,int x)
{
   

        while (l <= h)
        {

            int mid = l + (h - l) / 2;
            if(x == a[mid]) return mid;
            if(x == a[mid-1]) return mid-1;
            if(x == a[mid+1]) return mid+1;
            if(a[mid]>a[l] ){
                if(a[mid]>x){
                    
                    h = mid -1;

                }
                else{
                    l = mid+1;
                }

                
            }
            else{
                if(a[mid]<x){
                    
                    l = mid+1;
                }
                else{
                    h = mid-1;
                }

            }
        }
        return -1;

    }  

    //program to print index of minimum element in rotated sorted array

int minindex(int a[], int n, int l, int h)
{
   int ans = 0;

        while (l != h)
        {

            int mid = l + (h - l) / 2;
            if(a[mid]<a[mid-1] && a[mid]<a[mid+1]) return mid;

            if(a[mid]>a[h]){

                ans = mid;
                l = mid+1;


            }
            else{
                h = mid-1;
            }
        }
    }  


    //rpogram to print sqare_root of given number and round up it to nearest lowest value
      

int square_root(int l,int h){

    int ans = 0;
     while (l <= h)
    {

       int  mid = l + (h - l) / 2;
        if (mid * mid <= x)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    return ans;

}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;

    int l = 0, h = n - 1;


//program to print lowest index of target in sorted array
// n = 6
// a =  {1,2,2,2,3,4}
// output-1

//aproch - 1

    // while(l <= h){

    //     int mid = l +(h-l)/2;

    //         if(a[mid]==x){

    //             for(int i=l;i<=mid;i++){
    //                 if(a[i]==x){
    //                     cout<<i<<" ";
    //                     l = h;
    //                     break;
    //                 }
    //             }

    //         }

    //     else if(a[mid]>x){
    //         h = mid-1;

    //     }
    //     else if(a[mid]<x){
    //         l = mid+1;

    //     }

    // }

//approch - 2

    // cout<<"came out";
    // while(l <=h){

    //     int mid = l +(h-l)/2;

    //         if(a[mid]==x){

    //             if(a[l]==x){
    //                 cout<<l;
    //                 break;
    //             }
    //             else{
    //                 l++;
    //             }

    //         }

    //     else if(a[mid]>x){
    //         h = mid-1;

    //     }
    //     else {
    //         l = mid+1;

    //     }

    // }

    //approch - 3

    // while(l <= h){

    //     int mid = l +(h-l)/2;

    //         if(a[l]==x){

    //                 cout<<l;
    //                 break;
    //             }

    //     else if(a[mid]>x){
    //         h = mid-1;

    //     }
    //     else if(a[mid]<x) {
    //         l = mid+1;

    //     }
    //     else{
    //                 l++;
    //             }

    // }

    return 0;
}