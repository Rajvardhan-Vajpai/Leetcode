#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};


int main(){
    Node* first=new Node;
    Node* second=new Node;
    Node* third=new Node;
    Node* fourth=new Node;
    Node* fifth=new Node;

    first->data=1;
    second->data=2;
    third->data=3;
    fourth->data=4;
    fifth->data=5;

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=nullptr;

    Node* head=first;
    Node* curr=first;
    Node* last =head;
    Node* newHead=nullptr;
    int n=1;


    while(last->next!=nullptr){
        n++;
        last=last->next;
    }
    cout << n<<endl;
    int k=5;
    k=k%n;

    //cond1
    if(head==nullptr || head->next==nullptr){
        return 0;
    }
    if(k==0){
        return 0;
    }
    for(int i=1;i<n-k;i++){
        curr=curr->next;
   }
   newHead=curr->next;
   curr->next=nullptr;
   last->next=head;

   curr =newHead;

   while(curr!=nullptr){
    cout <<curr->data << " ";
    curr=curr->next;
   }

}