#include<iostream>
using namespace std;
class node {
    public : 
    int data;
    node* nxt;
    node(int val){
        data =val;
        nxt = NULL;

    }
};
void inserthead(node* &h,int v)
{
    node* n= new node(v);
    n->nxt=h;
    h=n;

}
void insertend(node* &h,int v){
    node* n = new node(v);
    if(h==NULL){
        inserthead(h,v);
    }
    node* t=h;
    while(t->nxt!=NULL){
        t=t->nxt;

    }
    t->nxt=n;


}

void dele(node* &h,int val){
    
 
 
node* t = h;
while(t->nxt->data!= val){
    t=t->nxt;
}
node* todel = t->nxt;
t->nxt = t->nxt->nxt;
delete todel;


}
void delhead(node* &h){
     node* t =h;
     h = h->nxt;
     delete t;
 }
 void display(node* h)
{
    node* t = h;

    while(t != NULL)
    {

        cout<<t->data<<" ";
        t=t->nxt;
    }
    cout<<endl;


}
node* reverse(node* &root, int k)
{
node* pp = NULL;
node* cp = root;
node* np ;
int c =0;
while(cp!=NULL && c<k){
    np=cp->nxt;
    cp->nxt=pp;
    pp=cp;
    cp=np;
    c++;
}
if(np!=NULL){
    root->nxt=reverse(np,k);
}
return pp;

}
node* rev(node* &h)
{
    if(h==NULL || h->nxt==NULL){
        return h;
    }
    node* newhe = rev(h->nxt);
    h->nxt->nxt = h;

    h->nxt = NULL;
    
    return newhe;

}
void evenafterodd(node* &h){

    node* od = h;
    node* ev = h->nxt;
    node* evs = ev;
    while(od->nxt!=NULL && ev->nxt!=NULL){
        od->nxt=ev->nxt;
        od = ev->nxt;
        ev->nxt = od->nxt;
        ev = od->nxt;

    }
    od->nxt = evs;
    if(od->nxt!=NULL){
        ev->nxt=NULL;
    }
}
int main()
{
    node* h=NULL;
    insertend(h,1);
     insertend(h,2);
 insertend(h,3);
 insertend(h,4);
 insertend(h,5);
 inserthead(h,6);
 display(h);
 dele(h,5);
 dele(h,1);
  display(h);
  delhead(h);
 display(h);
//  node* newh = reverse(h,4);
//  display(newh);
 node* newh2 = rev(h);
 display(newh2);
  insertend(newh2,5);
 inserthead(newh2,6);
  display(newh2);
 evenafterodd(newh2);

 display(newh2);
 return 0;


}