// O(n) time and space complexity 
#include<iostream>
#include<vector>
using namespace std;

struct Node
{
    int data ;
    Node* next;
};
int main(){


vector<int> v;

Node* first =new Node;
Node* second =new Node;
Node* third =new Node;
Node* fourth =new Node;

first->data =1;
second->data=2;
third->data=2;
fourth->data=1;

first->next=second;
second->next=third;
third->next=fourth;
fourth->next=nullptr;

Node* head=first;
Node* curr=head;


while(curr!=nullptr){//loop 1
    v.push_back(curr->data);
    curr=curr->next;
}
int i=0;
int j=v.size()-1;
bool isPal=true;
while(i<j){
    if(v[i]!=v[j]){
        isPal=false;
        break;
    }
    else{
        i++;
        j--;
    }
}
if(isPal==true){
    cout << " Is a Palindrome";
}
else{
    cout << "Not a Palindrome";
}

}
