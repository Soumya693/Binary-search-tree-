/*Array implementation as queue*/

#include<iostream>
using namespace std;

class Queue{
    public:
    Queue();
    void Enqueue(int);
    int Dequeue();
    bool isEmpty();
    bool isFull();
    void Print();
    private:
    int A[10];
    int front;
    int rear;
};

Queue::Queue(){
    front = -1;
    rear = -1;
}

bool Queue::isEmpty(){
    if(front = rear == -1){
        return true;
    }
    else{
        return false;
    }
}
bool Queue::isFull(){
    if(rear == sizeof(A) - 1){
        return true;
    }
    else{
        return false;
    }
}

void Queue::Enqueue(int x){
    if(isFull()){
        return;
    }
    else if(isEmpty()){
        front = 0;
        rear = 0;
    }
    else{
        rear = rear + 1;
    }
    A[rear] = x;
}

int Queue::Dequeue(){
    int y;
    if(isEmpty()){
        return -1;
    }
    else{
        y = A[front];
        front = front + 1;
    }
    return y;
}

void Queue::Print(){
    for(int i= front; i<rear+1;i++){
        cout<<A[i]<<endl;
    }
}


int main(){
    
    Queue Q;
    Q.Enqueue(2);
    Q.Enqueue(3);
    Q.Print();
    
    
    return 0;
}
