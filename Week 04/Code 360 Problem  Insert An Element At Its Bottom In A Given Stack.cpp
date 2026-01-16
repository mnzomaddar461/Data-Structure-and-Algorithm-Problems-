#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    stack<int> pushBottom(stack<int> &myStack, int x){
        stack<int> new_st;

        // reverse stack
        while(!myStack.empty()){
            new_st.push(myStack.top());
            myStack.pop();
        }

        // push at bottom
        myStack.push(x);

        // restore stack
        while(!new_st.empty()){
            myStack.push(new_st.top());
            new_st.pop();
        }

        return myStack;
    }
};

int main(){
    stack<int> myStack;
    int value;

    // input until -1 (do not push -1)
    while(true){
        cin >> value;
        if(value == -1) break;
        myStack.push(value);
    }

    int x;
    cin >> x;

    Solution insert;
    stack<int> result = insert.pushBottom(myStack, x);

    while(!result.empty()){
        cout << result.top() << endl;
        result.pop();
    }

    return 0;
}
