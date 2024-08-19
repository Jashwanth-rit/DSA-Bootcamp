#include<iostream>
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
void preprint(struct node* root){
if(root == NULL){
    return;
}
cout<<root->data<<" ";
preprint(root->left);
preprint(root->right);
}
int main(){
    struct node* root = new node(1);
    root->left = new  node(2);
    root->right = new  node(3);
    root->right->right = new  node(4);
    root->right->right->right = new  node(5);
    root->left->right= new  node(6);
    root->left->left= new  node(7);
    return 0;

}