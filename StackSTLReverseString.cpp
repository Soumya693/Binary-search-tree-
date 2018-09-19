/* Implementing stack using Standard template library in reversing a string*/

#include <iostream>
#include<stack>
//#include<string>
using namespace std;
void reverse(string& a, int l){
    stack <char> s;
    for(int i=0; i<l; i++){ // time complexity O(n) 
        s.push(a[i]);
    }
    
    for(int i=0;i<l;i++){  // time complexity O(n) 
        a[i] = s.top();
        s.pop();
    }
    //cout<<c<<endl;
}

int main()
{
    string a; 
    cout<<"enter the string"<<endl;
    cin>>a;
    int l = a.length();
    cout<<l<<endl;
    reverse(a, l);
    cout<<a<<endl;
    
   
   return 0;
}
