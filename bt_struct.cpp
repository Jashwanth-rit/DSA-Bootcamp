#include<iostream>
#include<vector>
#include<limits>
#include <bits/stdc++.h>
using namespace std;
struct node {
    int data;
   struct  node* left;
   struct node* right;
   
   public :
   node(int val){
    data = val;
    left = NULL;
    right = NULL;

   }
};
struct info {
    public:
    int mi;
   int m;
   int size;
   int ans;
   bool is_bst;
   int hei;
   int dia;
   info(int mn,int mx,int s,int a,bool bst,int h,int d){
    mi = mn;
    m = mx;
    size = s;
    ans = a;
    is_bst = bst;
    hei = h;
    dia = d;

   }

};


struct info* sendinfo(struct node* root){
    if(root == NULL){
        return new info(INT_MIN,INT_MAX,0,0,true,0,0);
    }
    if(root->left == NULL && root->right == NULL){
        return new info(root->data,root->data,1,1,true,1,1);
    }
   struct info* left = sendinfo(root->left);
   struct info* right = sendinfo(root->right);
    int myh = max(left->hei,right->hei)+1;
    int d1  =  (left->hei + right->hei + 1);
    int d2 = left->dia;
    int d3 = right->dia;
    int d = max(d1,max(d2,d3));
    int s = left->size+right->size+1;
    bool bst;
    int m ;
    int mi;
    int ans;
    if(left->is_bst && right->is_bst && left->m < root->data && right->m > root->data ){

m  = max(right->m,max(left->m,root->data));
mi  = min(right->mi,min(left->mi,root->data));
        bst = true;
        ans = s;

    }
    else{
        ans = max(left->ans,right->ans);
        bst = false;
        m = INT_MAX;
        mi = INT_MIN;
    }
return new info(mi,m,s,ans,bst,myh,d);


}
bool subtree_check(struct node* root,struct node* root1){
   if(root1 == NULL){
        return true;
    }
   
    
     if(root == NULL){
        return false;
    }

    if(root->data == root1->data){
        return (subtree_check(root->left,root1->left) && subtree_check(root->right,root1->right));
    }
    return (subtree_check(root->left,root1) || subtree_check(root->right,root1));
}


int diameter(struct node* root,int* h){
    if(root == NULL){
*h = 0;
        return 0;
    }
    int lh = 0,rh = 0;
    int ldia = diameter(root->left,&lh);
    int rdia = diameter(root->right,&rh);
    

    int d1 = lh+rh+1;
    return max(d1,max(ldia,rdia));


     

}
int distance(struct node* root,int n1,int dis){
    if(root == NULL){
        return -1;
    }
    if(root->data ==  n1){
        return dis;
    }
    int left = distance(root->left,n1,dis+1);
    if(left != -1){
        return distance(root->right,n1,dis+1);
    }
    return left;
}

node* short_dis(struct node* root,int n1,int n2){
    if(root == NULL){
        return NULL;
    }
    if(root->data == n1 || root->data == n2){
        return root;
    }
    node* left = short_dis(root->left,n1,n2);
    node* right = short_dis(root->right,n1,n2);
    if(left != NULL && right != NULL){
        return root;
    }
    else if(left == NULL && right == NULL){
        return NULL;
    }
    if(left != NULL){
        return short_dis(root->left,n1,n2);

    }
   return short_dis(root->right,n1,n2);



}
void print(struct node* root,int dis){
    if(root == NULL || dis<0){
        return;
    }
    if(dis == 0){
        cout<<root->data<<" ";
        return;
    }
    print(root->left,dis-1);
    print(root->right,dis-1);

}
int get_distancek(struct node* root,int val,int dis,int k){
    if(root == NULL){
        return -1;
    }
    if(root->data == val){
        return dis;
    }
    int ld = get_distancek(root->left,val,dis+1,k);
    int rd = get_distancek(root->right,val,dis+1,k);
    if(ld != -1){
        if((k-dis-1)<0){
            int l = -(k-dis-1);
            print(root->left,l);
        }
        else if((k-dis-1)==0){
            cout<<root->data<<" ";
        }
        else{
            print(root->right,k-dis-1);

        }
        print(root->left,k+dis);
        return ld+1;
        
    }
    if(rd != -1){
        if((k-dis-1)<0){
            int l = -(k-dis-1);
            print(root->right,l);
        }
        else if((k-dis-1)==0){
            cout<<root->data<<" ";
        }
        else{
            print(root->left,k-dis-1);

        }
        print(root->right,k+dis);
        return rd+1;
        
    }

}
int inorder_left(struct node* root){
    if(root == NULL){
        return INT_MAX;
    }

    while(root->left != NULL){
        root = root->left;
    }
    return root->data;

}
int inorder_right(struct node* root){
    if(root == NULL){
        return INT_MIN;
    }

    while(root->right != NULL){
        root = root->right;
    }
    return root->data;

}
bool check_bst_inorderseccusor(struct node* root){
    if(root == NULL){
        return true;
    }
    if(root->data > inorder_right(root->left) && root->data < inorder_left(root->right)){
        return (check_bst_inorderseccusor(root->left) && check_bst_inorderseccusor(root->right));

    }
    return false;
    

}
bool check_bst_mm(struct node* root,int max,int min){
    if(root == NULL){
        return true;

    }
    if(root->data > min && root->data < max){
        return (check_bst_mm(root->left,root->data,INT_MIN) && check_bst_mm(root->right,INT_MAX,root->data));

    }

    return false;
}
struct node* binary_tree(struct node* root,vector<int> a,int n,int i){

    if(i>n){
        return NULL;
    }

    root = new node(a[i]);
    if((2*i+1)<n)
    root->left = binary_tree(root->left,a,n,2*i+1);
    if((2*i+2)<n)
    root->right = binary_tree(root->right,a,n,2*i+2);
    return root;
}

void inprint(struct node* root){
if(root == NULL){
    return;
}

inprint(root->left);
cout<<root->data<<" ";
inprint(root->right);
}
int main(){
    // int n;
    // cin>>n;
    // vector<int> a(n);
    // for(auto &i : a)
    //  cin>>i;
    


    //  int m;
    // cin>>m;
    // vector<int> b(m);
    // for(auto &i : a)
    //  cin>>i;
    vector<int> a ={5,3,7,2,4,6};
    //vector<int> b ={5,3,7};

    // struct node* root1 = NULL;
    //  root1 = binary_tree(root1,b,b.size(),0);
     struct node* root = NULL;
     root = binary_tree(root,a,a.size(),0);
     
     inprint(root);
     cout<<"\n";

      if(check_bst_inorderseccusor(root)){
    cout<<"yes it is bst"<<" ";

}
else{
     cout<<"no it is not bst"<<" ";


}

// if(check_bst_mm(root,INT_MAX,INT_MIN)){
//     cout<<"yes it is bst"<<" ";

// }
// else{
//      cout<<"no it is not bst"<<" ";


// }

    //  int val = 3;
    //  int k = 1;
    //  get_distancek(root,val,0,k);
     

    // inprint(root1);



    //  node* lca = short_dis(root,n1,n2);
    //  int d1 = distance(lca,n1,0);
    //  int d2 = distance(lca,n2,0);
    //  cout<<(d1+d2)<<" ";
    // struct info* in = sendinfo(root);
    // cout<<in->ans<<" "<<in->dia<<" "<<in->hei<<" "<<in->is_bst<<" "<<in->m<<" "<<in->mi<<" ";
// if(root1 == NULL){
//     cout<<"yes subtree present"<<" ";
//     return 0;
// }

//      if(subtree_check(root,root1)){
//         cout<<"yes subtree present";
//      }
//      else{
//         cout<<" subtree not present";
//      }
    return 0;
}