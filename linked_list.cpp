#include <bits/stdc++.h>
#include<iostream>

using namespace std;

class node{
    public:
    int data;
    node* nxt;
    node(int val){
        data = val;
        nxt = NULL;
    }

};

void odd_even(node* &head){
    node* odd = head;
    node* even = head->nxt;
    node* even_start = head->nxt;
    while(odd != NULL && even!= NULL && odd->nxt != NULL && even->nxt != NULL ){
        odd->nxt = even->nxt;
        odd = even->nxt;
        even->nxt = odd->nxt;
        even = odd->nxt;
    }
    while(odd->nxt==NULL){
         odd->nxt = even_start;

    }
//    even->nxt = odd->nxt;
//         even = odd->nxt;
//     odd->nxt = even_start;
//     even->nxt = NULL;


}
int link_length(node* &head){
    int c = 0;
    node* temp = head;
    while(temp->nxt!=NULL){
        temp = temp->nxt;
        c++;
    }
    return c+1;
}
bool detect(node* &head){
    node* slow = head;
    node* fast = head;
    while(fast!=NULL && fast->nxt!=NULL){
        slow = slow->nxt;
        fast = fast->nxt->nxt;
        if(fast == slow){
            return true;
        }
    }
    return false;

}

node* kappend(node* &head,int k){

    int l = link_length(head);
    node* newhead;
    node* newtail;
    node* temp = head;
    int n = 0;
    while(temp->nxt!= NULL){
        if(n = l-k){
            newtail = temp;
        }
        if(n = l-k+1){
            newhead = temp;
        }
       temp =  temp->nxt ;
        n++;
    }
    newtail->nxt = NULL;
    temp->nxt = head;

    return newhead;

}
node* reverse(node* head){

    node* preptr = NULL;
    node* nxtptr; 
    node* curptr = head;
    while(curptr != NULL){

        nxtptr = curptr->nxt;
        curptr->nxt = preptr;
        preptr = curptr;
        curptr = nxtptr;
    }
    return preptr;
    

}
node* reversek(node* head,int k){

    node* preptr = NULL;
    node* nxtptr; 
    node* curptr = head;
    int c = 0;
    while(curptr != NULL && c != k){

        nxtptr = curptr->nxt;
        curptr->nxt = preptr;
        preptr = curptr;
        curptr = nxtptr;
        c++;
    }
    if(nxtptr!=NULL){
       head->nxt =  reversek(nxtptr,k);
    }
    return preptr;
    

}

int search(node* &head,int val){

    if(head == NULL){
        return -1;
    }
    int pos = 0;
    node* temp = head;
    while(temp->data != val){
        temp = temp->nxt;
        pos++;
    }
    return pos+1;
}
void delet_end(node* &head){
    if(head == NULL){
        cout<<"no value present to dlt!"<<"\n";
        return;
    }
node* temp = head;
while(temp->nxt->nxt != NULL){

    temp = temp->nxt;

}
node* todlt = temp->nxt;
temp->nxt = temp->nxt->nxt;
delete todlt;


}
node* rec_reverse(node* &head){
    if(head == NULL || head->nxt==NULL){

        return head;
    }

    node* newhead = rec_reverse(head->nxt);
    head->nxt->nxt = head;
    head->nxt = NULL;
return newhead;


    
}
void delet_pos(node* &head,int pos){
    if(head == NULL){
        cout<<"no value present to dlt!"<<"\n";
        return;
    }
node* temp = head;
int c = 0;
while(c != pos){


    temp = temp->nxt;
    c++;

}
node* todlt = temp->nxt;
temp->nxt = temp->nxt->nxt;
delete todlt;


}
void delet_val(node* &head,int val){
    if(head == NULL){
        cout<<"no value present to dlt!"<<"\n";
        return;
    }

node* temp = head;
    while(temp->nxt->data != val){
        temp = temp->nxt;
        
    }
    node* todlt = temp->nxt;
    temp->nxt = temp->nxt->nxt;
    delete todlt;




}
void delete_big(node* &head){
    if(head == NULL){
        cout<<"no value present to dlt!"<<"\n";
        return;
    }
node* temp = head;
head = temp->nxt;
delete temp;


}

void insert_end(node* &head,int val){

node* n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head ;
    while(temp->nxt != NULL){
        temp = temp->nxt;
    }

    temp->nxt = n;

}
void insert_pos(node* &head,int val,int pos){

node* n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head ;
    int c = 0;
    while(c != pos){
        temp = temp->nxt;
        c++;
    }
n->nxt = temp->nxt->nxt;
    temp->nxt = n;
    

}
void insert_big(node* &head,int val){
    node* n = new node(val);
    n->nxt = head;
    head = n;

}

void display(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->nxt;
    }

}

int main(){
    node* head = NULL;

    for(int i=0;i<7;i++){
        insert_end(head,i);
    }
    display(head);
    cout<<"\n";
   odd_even(head);
   display(head);



    return 0;
}