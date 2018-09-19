#include <iostream>
#include<stack>
#include<string>
using namespace std;

int PerformOp(char c, int a, int b){
    if(c == '+'){
        return a+b;
    }
    if(c == '-'){
        return a-b;
    }
    if(c == '/'){
        return a/b;
    }
    if(c == '*'){
        return a*b;
    }
}

bool isNumeric(char c){
    if(c>='0' && c<='9'){
        return true;
    }
}

int EvaluatePostfix(string s){
    stack<int> st;
    int op2;
    int op1;
    int l = s.length();
    for(int i=0;i<l;i++){
        if(s[i] == ' ' || s[i] == ','){
            continue;
        }
        else if(s[i] == '+' || s[i] == '-'||s[i] == '*'||s[i]== '/'){
            op2 = st.top(); st.pop();
            op1 = st.top();st.pop();
            int res = PerformOp(s[i],op2,op1);
        }
        else if(isNumeric(s[i])){
            int op = 0;
            while(i<l && isNumeric(s[i])){
                op = op*10 + (s[i] - '0');
                i++;
            }
            i--;
            st.push(op);
        }
        
        
    }
    return st.top();
    
}

int main(){
    string s;
    cin>>s;
    int result = EvaluatePostfix(s);
    cout<<result<<endl;
}

