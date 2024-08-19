int max_idx(int a[],int n){
       
        int mn = INT_MAX;
        int idx = 0;
        for(int i = 0;i<n;i++){
            if(mn>a[i]){
                mn = a[i];
                idx = i;
            }
        }
        return idx;
    }
 int kthSmallest(int a[], int l, int r, int k) {
        int idx;
        
        for(int i = 0 ;i<=(k);i++){
            for(int i = 0;i< r+1 ;i++){
                cout<<a[i]<<" ";
            }
            cout<<"\n";
            idx =  max_idx(a,r+1);
            if(i == k){
                break;
            }
            else{
                a[idx] = INT_MAX;
                
            }
        }  
        
        return a[idx];
    }
    