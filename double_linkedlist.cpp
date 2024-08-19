
//note:always try to handle corner case by identifing it


#include <bits/stdc++.h>
#include<iostream>

using namespace std;

class node{
    public:
    int data;
    node* nxt;
    node* pre;
    node(int val){
        data = val;
        nxt = NULL;
        pre = NULL;
    }

};

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
    while(temp->data != val ){
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
temp->nxt = NULL;

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
    temp->nxt->nxt->pre = temp;
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
    temp->nxt->nxt->pre = temp;
    delete todlt;




}
void delete_big(node* &head){
    if(head == NULL){
        cout<<"no value present to dlt!"<<"\n";
        return;
    }
node* temp = head;
head = temp->nxt;
head->nxt = temp->nxt->nxt;
head->pre = NULL;
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
    n->pre = temp;

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
    n->pre = temp;
    
    

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

    for(int i=0;i<6;i++){
        insertend(head,i);
    }
    display(head);
    cout<<"\n";
   cout<<search(head,3);



    return 0;
}


//implimentation of double linked list using head and tail both




//#include <bits/stdc++.h>
// #include<iostream>

// using namespace std;


// class node{
//     public:
//     int data;
//     node* nxt;
//     node* pre;
//     int pos ;
//     node(int val,int position){
//         pos = position;
//         data = val;
//         nxt = NULL;
//         pre = NULL;
//     }

// };
// void reverse(node* &head,node* &tail);
// int search_val(node* head,node* tail,int p);
// int search_id(node* head,node* tail,int val);
// void delete_end(node* &head,node* &tail);
// void delete_pos(node* &head,node* &tail,int p);
// void delete_val(node* &head,node* &tail,int val);
// void delete_big(node* &head,node* &tail);
// void insert_end(node* &head,node* &tail,int val);
// void insert_pos(node* &head,node* &tail,int val,int p);
// void insert_big(node* &head,node* &tail,int val);
// void correct_posd(node* head1,node* tail1,int p);
// void correct_posi(node* head1,node* tail1,int p);



// void reverse(node* &head,node* &tail){

//    node* temp = head;
//    head = tail;
//    tail = temp;
    

// }
// // node* reversek(node* head,int k){

// //     node* preptr = NULL;
// //     node* nxtptr; 
// //     node* curptr = head;
// //     int c = 0;
// //     while(curptr != NULL && c != k){

// //         nxtptr = curptr->nxt;
// //         curptr->nxt = preptr;
// //         preptr = curptr;
// //         curptr = nxtptr;
// //         c++;
// //     }
// //     if(nxtptr!=NULL){
// //        head->nxt =  reversek(nxtptr,k);
// //     }
// //     return preptr;
    

// // }
// int search_val(node* head,node* tail,int p){
    
//     if(head == NULL){
//         return -1;
//     }
    
//     node* temp1 = head;
//         node* temp2 = tail;
//         int c = 0;
//         int  n = search_id(head,tail,tail->data);
//         if(p >= n/2){
//              while(c != n-p){
//         c++;
//         temp2 = temp2->pre;
        
//     }
//     return temp2->data;

   

//         }
//          else{
//              while(c != p){
//         c++;
//         temp1 = temp1->nxt;
        
//     }
//     return temp1->data;


        
//     }
   

// }
// node* search_node(node* head,node* tail,int p){
    
//     if(head == NULL){
//         return nullptr;
//     }
    
//     node* temp1 = head;
//         node* temp2 = tail;
//         int c = 0;
//         int  n = search_id(head,tail,tail->data);
//         if(p >= n/2){
//              while(c != n-p){
//         c++;
//         temp2 = temp2->pre;
        
//     }
//     return temp2;

   

//         }
//          else{
//              while(c != p){
//         c++;
//         temp1 = temp1->nxt;
        
//     }
//     return temp1;


        
//     }
   

// }

// int search_id(node* head,node* tail,int val){

//     if(head == NULL){
//         return -1;
//     }
    
//     node* temp1 = head;
//         node* temp2 = tail;
//     while(temp1->data != val && temp1 != NULL && temp2 != NULL && temp2->data != val){
//         temp1 = temp1->nxt;
//         temp2 = temp2->pre;
        
//     }
//     if(temp1->data == val && temp1 != NULL){
//         return temp1->pos;
//     }
//     else if(temp2 != NULL && temp2->data == val){
//          return temp2->pos;

//     }
//     return -1;
   
// }


// void delete_end(node* &head,node* &tail){
//     if(head == NULL){
//         cout<<"no value present to dlt!"<<"\n";
//         return;
//     }
// node* temp = tail;
// // temp->pre->nxt = NULL;
// // tail = tail->pre;

// if(tail->pre != NULL){
//     tail->pre->nxt = NULL;
// }
// tail = tail->pre;
//     if (tail == NULL) {
//         head = NULL;
//     }



// delete temp;


// }
// // node* rec_reverse(node* &head){
// //     if(head == NULL || head->nxt==NULL){

// //         return head;
// //     }

// //     node* newhead = rec_reverse(head->nxt);
// //     head->nxt->nxt = head;
// //     head->nxt = NULL;
// // return newhead;


    
// // }
// void delete_pos(node* &head,node* &tail,int pos){
//     if(head == NULL){
//         cout<<"no value present to dlt!"<<"\n";
//         return;
//     }
//      if(head->pos == pos){
//         delete_big(head,tail);
//         return;
//     }
//     if(tail->pos == pos){
//         delete_end(head,tail);
//         return ;

//     }
// node* temp = head;


// while(temp->pos != pos && temp != NULL){


//     temp = temp->nxt;
    

// }
// if (temp == NULL) {
//         return;
//     }
//     temp->pre->nxt = temp->nxt;
//     if (temp->nxt != NULL) {
//         temp->nxt->pre = temp->pre;
//     }
//     delete temp;
// // node* todlt = temp->nxt;
// //     temp->nxt = temp->nxt->nxt;
// //     temp->nxt->nxt->pre = temp;
// //     delete todlt;
// //     correct_posd(temp->nxt->nxt,tail,temp->nxt->nxt->pos);
// correct_posd(head, tail, pos);



// }
// void delete_val(node* &head,node* &tail,int val){
//     if(head == NULL){
//         cout<<"no value present to dlt!"<<"\n";
//         return;
//     }
//     if(head->data == val){
//         delete_big(head,tail);
//         return;
//     }
//     if(tail->data == val){
//         delete_end(head,tail);
//         return ;

//     }
//      node* temp = head;
//     while (temp != NULL && temp->nxt->data != val) {
//         temp = temp->nxt;
//     }
//     if (temp == NULL || temp->nxt == NULL) {
//         return;
//     }
//     node* todlt = temp->nxt;
//     temp->nxt = temp->nxt->nxt;
//     if (temp->nxt != NULL) {
//         temp->nxt->pre = temp;
//     }
//     delete todlt;
//     correct_posd(temp, tail, temp->pos);

// // node* temp = head;
// //     while(temp->nxt->data != val){
// //         temp = temp->nxt;
        
// //     }
// //     node* todlt = temp->nxt;
// //     temp->nxt = temp->nxt->nxt;
// //     temp->nxt->pre = temp;
// //     delete todlt;
// //     correct_posd(temp->nxt->nxt,tail,temp->nxt->nxt->pos);



// }
// void delete_big(node* &head,node* &tail){
//     if(head == NULL){
//         cout<<"no value present to dlt!"<<"\n";
//         return;
//     }
//     if(tail == head){
//         head = NULL;
//         tail = NULL;
//         return;

//     }
// node* temp = head;
// head = temp->nxt;
// if (head != NULL) {
//         head->pre = NULL;
//     } else {
//         tail = NULL;
//     }
//     delete temp;
//     correct_posd(head, tail, 1);
// // head->nxt = temp->nxt->nxt;
// // head->pre = NULL;
// // delete temp;
// // correct_posd(head,tail,head->pos);


// }

// void insert_end(node* &head,node* &tail,int val){

//  node* n = new node(val, (tail == NULL) ? 1 : tail->pos + 1);

//     if(head == NULL){
//         insert_big(head,tail,val);
       
//         return;
//     }
//     node* temp =tail;
//     temp->nxt = n;
//     n->pre = temp;
//     tail = n;
// }
// void insert_pos(node* &head,node* &tail,int val,int p){

//     if(head == NULL || p == 1){
//         insert_big(head,tail,val);
//         return;
//     }

//     node* t = search_node(head,tail,p);

// node* n = new node(val, (t == NULL) ? 1 : t->pos + 1);
// if (t == NULL || t->nxt == NULL) {
//         insert_end(head, tail, val);
//         return;
//     }

//     node* temp = t;
//     n->nxt = temp->nxt;
//     if (temp->nxt != NULL) {
//         temp->nxt->pre = n;
//     }
//     temp->nxt = n;
//     n->pre = temp;
//     correct_posi(temp, tail, temp->pos);

// //     node* temp = head ;
// //     int c = 0;
    
// //     while(temp->pos != pos){
// //         temp = temp->nxt;
// //         c++;
// //     }
// //     // if(pos == search_id(head,tail,tail->data)){
// //     //     insert_end(head,tail,val);
// //     //     return;
// //     // }
// // n->nxt = temp->nxt;
// // temp->nxt->pre = n;
// // correct_posi(temp,tail,temp->pos);
// //     temp->nxt = n;
// //     n->pre = temp;
    
    

// }
// void correct_posd(node* head1,node* tail1,int pos){
// node* temp1 = head1;
// node* temp2 = tail1;

//     while(temp1 != temp2){
//         temp1->pos =   temp1->pos - 1;
//           temp1 =   temp1->nxt;
//        temp2->pos = temp2->pos - 1;
//         temp2 = temp2->pre;

//     }
// }

// void correct_posi(node* head1,node* tail1,int pos){
// node* temp1 = head1;
// node* temp2 = tail1;

//     while(temp1 != temp2){
//         temp1->pos =   temp1->pos +1;
//           temp1 =   temp1->nxt;
//        temp2->pos = temp2->pos + 1;
//         temp2 = temp2->pre;

//     }
// }
// void insert_big(node* &head,node* &tail,int val){
//     node* n = new node(val,1);
    
//     if(head == NULL){
       
//     head = n;
//      tail = n;
//      return;

//     }
//    n->nxt = head;
//     head->pre = n;
//     head = n;
//     correct_posi(head,tail,1);


// }

// void display(node* &head){
//     node* temp = head;
//     while(temp != NULL){
//         cout<<temp->data<<" "<<temp->pos<<"\n";
//         temp = temp->nxt;
//     }

// }

// int main(){
//     node* head = NULL;
//     node* tail = NULL;

//     for(int i=0;i<6;i++){
//         insert_end(head,tail,i);
//     }
//     display(head);
//     cout<<"\n";
//    cout<<search_id(head,tail,3);



//     return 0;
// }