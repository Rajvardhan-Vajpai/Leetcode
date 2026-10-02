#include<iostream>
#include<vector>
using namespace std;

struct Node
{
    int data ;
    Node* next;
};


Node* middle_num(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=nullptr and fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
        Node* curr=slow;
    while(curr!=nullptr){
        cout << curr->data << " ";
        curr=curr->next;
    }

}

int main(){

Node* first =new Node;
Node* second =new Node;
Node* third =new Node;
Node* fourth =new Node;
Node* fifth =new Node;
Node* sixth=new Node;

first->data =1;
second->data=2;
third->data=3;
fourth->data=4;
fifth->data=5;
sixth->data=6;

first->next=second;
second->next=third;
third->next=fourth;
fourth->next=fifth;
fifth->next=sixth;
sixth->next=nullptr;

Node* head=first;

Node* mid=middle_num(head);
cout << mid->data;

}