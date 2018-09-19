/*Implementing Queue using linkedlist*/

#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* front = new Node;
Node* rear = new Node;

void Enqueue(int x){
    Node* temp = new Node;
    //Node* temp1 = new Node;
    temp->data = x;
    temp->next = NULL;
    if(front == NULL && rear == NULL){
        front = temp;
        rear = temp;
        return;
    }
    //temp1 = rear;
    rear->next = temp;
    rear = temp;
}

/*int Dequeue(){
    int d;
    Node* temp1 = new Node;
    if(front == NULL){
        return -1;
    }
    if(front == rear){
        front = rear = NULL;
    }
    else{
        temp1 = front;
        front = temp1->next;
        d = temp1->data;
        delete temp1;
    }
    return d;
}*/

void print(){
    Node* temp = new Node;
    temp = front;
    while(temp->next!=NULL){
        cout<<temp->data<<endl;
    }
}



int main()
{
    front = NULL;
    rear = NULL;
    Enqueue(2);
    Enqueue(3);
    print();
    //cout << "Hello World" << endl; 
   
    return 0;
}
