#include<iostream>
#include<vector>
using namespace std;

struct Node
{
    int data ;
    Node* next;
};

vector<int> twoSum(vector<int> v,int target){
    for(int i=0;i<v.size();i++){
    for(int j=i+1;j<v.size();j++){
        int sum=v[i]+v[j];
        if(sum==target){
            return{i,j};
        }
    }

}

}

int main(){

vector<int> v;

int target=9;
Node* first =new Node;
Node* second =new Node;
Node* third =new Node;
Node* fourth =new Node;

first->data =7;
second->data=2;
third->data=3;
fourth->data=1;

first->next=second;
second->next=third;
third->next=fourth;
fourth->next=nullptr;

Node* head=first;
Node* curr=head;

while(curr!=nullptr){
    v.push_back(curr->data);
    curr=curr->next;
}

vector<int> ans=twoSum(v,9);
cout << ans[0] << " ";
cout << ans[1];

}