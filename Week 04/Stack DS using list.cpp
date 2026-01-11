#include<bits/stdc++.h>
using namespace std;

class myStack{
    public:
        list<int> stack;

        void push(int value){
            stack.push_back(value);
        }

        void pop(){
            stack.pop_back();
        }

        int top(){
            return stack.back();
        }

        int size(){
            return stack.size();
        }

        bool empty(){
            return stack.empty();
        }
};
int main(){
    myStack st;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        st.push(x);
    }

    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}