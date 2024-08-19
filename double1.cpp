#include<iostream>
using namespace std;
class node {
    public :
    int data;
    node* nxt;
    node* pre;
    
    
        node(int val)
        {
            data = val;
            pre = NULL;
          nxt  = NULL;
        
    }
};
node* inhead(node* &h,int val){
     node* n = new node(val);
    if(h!=NULL)
    {
        h->pre = n;
    }
    n->nxt = h;
    h = n;
}
node* inend(node* &h,int val){
    node* n = new node(val);
    if(h==NULL){
        inhead(h,val);
    }
    node* t = h;
    while(t->nxt != NULL)
    {
t=t->nxt;
    }
    t->nxt = n;
    n->pre = t;
    n->nxt = NULL;


}
node* dele(node* &h,int pos){
    node* t = h;
    if(pos==1){
        node* de = h;
       h = h->nxt;
        h->pre = NULL;

        delete de;
        return h;
    
    }
    int c=1;
    while(t->nxt!=NULL && c<pos){
        t = t->nxt;
        c++;

    }
    node* del = t;
    
    t->pre->nxt = t->nxt;
if(t->nxt!=NULL){
    t->nxt->pre = t->pre;
}

    delete del;
    return t;


}
void display(node* &h){
    node* t = h;
    while(t!=NULL){
        cout<<t->data<<" ";
        t=t->nxt;


    }
    cout<<endl;

}
int main()
{
    node* h = NULL;
    inend(h,1);
    inend(h,2);
    inend(h,3);
    inend(h,4);
    inend(h,5);
    inhead(h,6);
    display(h);
    dele(h,4);
    display(h);


}
