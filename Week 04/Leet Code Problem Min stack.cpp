#include<bits/stdc++.h>
using namespace std;
// - Asked in [Google, Amazon, Apple, Microsoft, Adobe] 
class Solution{
public:
    stack<int> st, minSt;

    void push(int val){
        st.push(val);
        if(minSt.empty() || val <= minSt.top()){
            minSt.push(val);
        }
    }

    void pop(){
        if(st.empty()) return;

        if(st.top() == minSt.top()){
            minSt.pop();
        }
        st.pop();
    }

    int top(){
        if(st.empty()) return -1;
        return st.top();
    }

    int getMin(){
        if(minSt.empty()) return -1;
        return minSt.top();
    }
};

int main(){
    Solution st;
    int val;

    while(cin >> val && val != -1){
        st.push(val);
    }

    // Example usage
    cout << "Top: " << st.top() << endl;
    cout << "Min: " << st.getMin() << endl;

    st.pop();
    cout << "After pop -> Min: " << st.getMin() << endl;

    return 0;
}
