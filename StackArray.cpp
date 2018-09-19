/*Implementing stack using arrays*/

#include <iostream>

using namespace std;
class Stack{
    public:
    Stack();
    void push(int);
    void pop();
    bool IsEmpty();
    int Top();
    void print();
    private:
    int A[10];
    int top;
};

Stack::Stack(){
    top = -1;
}
void Stack::push(int x){
    if(top==9){
        cout<<"stackoverflow"<<endl;
        return;
    }
    top = top + 1;
    A[top] = x;
}

void Stack::pop(){
    if(top == -1){
        cout<<"stack already empty"<<endl;
        return;
    } 
	
    top = top-1;
}

int Stack::Top(){
    return A[top];
}
bool Stack::IsEmpty(){
    if(top == -1){
        return true;
    }
    else{
        return false;
    }
}

void Stack::print(){
    int i;
    for(i=0;i<=top;i++){
        cout<<A[i]<<endl;
    }
}
int main()
{
    Stack stack;
    stack.push(2);
    stack.push(5);
    stack.push(10);
    stack.pop();
    stack.push(12);
    stack.print();
    
   
   return 0;
}
