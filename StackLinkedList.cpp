/*Implementing stack using linkedlist*/


#include <iostream>

using namespace std;
struct Node{
    int data;
    Node* next;
};

Node* top = new Node;

void push(int x){
    Node* temp = new Node;
    temp->data = x;
    temp->next = top;
    top = temp;
}

void pop(){
    if(top == NULL){
        return;
    }
    Node* temp = new Node;
    temp = top;
    top = temp->next;
    delete temp;
}

int showTop(){
    if(top == NULL){
        return -1;
    }
    Node* temp = new Node;
    temp = top;
    return temp->data;
}

void print(){
    Node* temp = new Node;
    temp = top;
    while(temp->next!=NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}
int main()
{
   push(2);
   push(3);
   cout<<showTop()<<endl;
   //print();
   
   return 0;
}
