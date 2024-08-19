#include<iostream>
#include<queue>
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
int search(int in[],int s,int e,int curr){
while(s<e){
    if(in[s]==curr){
        return s;
    }
    s++;
}
}
void preprint(struct node* root){
if(root == NULL){
    return;
}
cout<<root->data<<" ";
preprint(root->left);
preprint(root->right);
}



node* pretoin(int in[],int s,int e,int pre[]){
    static int id = 0 ;
if(e<s){
    return NULL;
}
int curr = pre[id];
id++;
node* no = new node(curr);
if(s == e){
    return no;
}
int pos = search(in,s,e,curr);
no->left = pretoin(in,s,pos-1,pre);
no->right = pretoin(in,pos+1,e,pre);
return no;

}
void printin(struct node* root){
    if(root == NULL){
        return;
    }
    printin(root->left);
    cout<<root->data<<" ";
    printin(root->right);

}
node* level(node* root){
    if(root == NULL){
        return NULL;


    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* node = q.front();
        q.pop();
        if(node!=NULL){
            cout<<node->data<<" ";
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
            else if(!q.empty()){
                q.push(NULL);
                
            }
        }
    }
}
int height(node* root){
    if(root == NULL){
        return 0;
    }
    return (max(height(root->left),height(root->right))+1) ;
}
int diameter(node* root){
    if(root == NULL){
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    int d1 = lh+rh+1;
    int ld = diameter(root->left);
    int rd = diameter(root->right);
    return (max(d1,max(ld,rd)));
}
int count1(node* root){
    if(root == NULL){
        return 0;
    }
     return (count1(root->left)+count1(root->right))+1 ;
}
int main(){
    struct node* root = new node(1);
    root->left = new  node(2);
    root->right = new  node(3);
    root->right->right = new  node(4);
    root->right->right->right = new  node(5);
    root->left->right= new  node(6);
    root->left->left= new  node(7);
    preprint(root);
    cout<<endl;
    int pre[]={1,2,7,6,3,4,5};
    int in[]={7,2,6,1,3,4,5};
   node* newroot = pretoin(in,0,6,pre);
   printin(newroot);
   cout<<endl;
   level(newroot);
   cout<<endl;
  int k = count1(newroot);
  cout<<k<<endl;
  int d = diameter(newroot);
  cout<<d<<endl;
   return 0;

}