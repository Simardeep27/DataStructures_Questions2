#include <iostream>

using namespace std;
class Node{
public:
    int data;
    Node* next;
    };
Node* head=NULL;
void push(int data){
    Node* new_node=new Node();
    new_node->data=data;
    new_node->next=head;
    head=new_node;
}
void middle(Node* ptr){
    int val=0;
    Node *calc=head;
    while(ptr!=NULL){
        ptr=ptr->next;
        val++;
        }
       int i=0;
       while(i<(val)/2){
       calc=calc->next;
       i++;
        }
        cout<<" "<<calc->data;
}
void middle_2(){
Node* slow=head;
Node* fast=head;
while(fast!=NULL && fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
}
cout<<" "<<slow->data;
}

void repete(Node* ptr,int num){
int cnt=0;
while(ptr!=NULL){
    if(ptr->data==num){
        cnt++;
    }
    ptr=ptr->next;

}
cout<<" "<<cnt;

}
int repete_rec(Node* ptr,int num){
if(ptr->data==num){
    return 1+repete_rec(ptr->next,num);
}
else{
    return repete_rec(ptr->next,num);
}}
int loop(){
Node* first=head;
Node* second=head;
while(first && second && second->next){
    first=first->next;
    second=second->next->next;
    if(first==second){
        return 1;
    }

}
return 0;
}
//Finding length of the loop in a linked list
int Countloop(){
Node* first=head;
Node* second=head;
Node* ptr;
int cnt=1;
while(first && second && second->next){
    first=first->next;
    second=second->next->next;
    if(first==second){
        ptr=first;
        first=first->next;
        while(first!=ptr){
            cnt++;
            first=first->next;
        }
        return cnt;
    }

}
return 0;



}
int main()
{
    //push(10);
    //push(2);
    //push(2);
    //push(4);
    //push(2);
    //push(0);
    //push(3);
    //middle_2();
    //repete(head,9);
    //cout<<" "<<repete_rec(head,2);
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    head->next->next->next->next->next=head->next;
    //cout<<" "<<loop();
    cout<<" "<<Countloop();
}
