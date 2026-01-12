#include<bits/stdc++.h>
using namespace std;
//- Asked in [Google, Apple, Microsoft, Amazon]
class MyQueue {
public:
    stack<int> st;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        stack<int> st2;
        int value;
        while(!st.empty()){
            value = st.top();
            st.pop();
            if(st.empty() == true){
                break;
            }
            st2.push(value);
        }

        while(!st2.empty()){
            st.push(st2.top());
            st2.pop();
        }
        return value;
    }
    
    int peek() {
        stack<int> st2;
        int value;
        while(!st.empty()){
            value = st.top();
            st.pop();
            st2.push(value);
        }

        while(!st2.empty()){
            st.push(st2.top());
            st2.pop();
        }
        return value;
    }
    
    bool empty() {
        return st.empty();
    }
};

int main(){
    MyQueue st;
    int value;
    while (true)
    {
        cin >> value;
        if(value == -1){
            break;
        }
        st.push(value);
    }

    cout << "PeeK: " << st.peek() << endl;
    cout << "Pop: " << st.pop() << endl;
    if(!st.empty()){
        cout << "Chack Empty: " << "Not Empty!" << endl;
    }
    else{
        cout << "Chack Empty: " << "Empty!" << endl;
    }
    
    return 0;
}