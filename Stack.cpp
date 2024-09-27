#include <bits/stdc++.h>
using namespace std;

class Stack{
public:
    int top=-1;
    vector<int> st= vector<int> (10);

    void push(int val){
        if (top>10) {
            cout<<"Stack Oveflow";
            return;
        }
        top++;
        st[top]=val;
        cout<<"Value added"<<endl;
        return;
    }

    int pop(){
        if (top==-1) {
            cout<<"Stack Underflow";
            return -1;
        }
        return st[top--];
    }
};

int main(){
    Stack s;
    s.push(3);
    cout<<s.pop();
    return 0;
}