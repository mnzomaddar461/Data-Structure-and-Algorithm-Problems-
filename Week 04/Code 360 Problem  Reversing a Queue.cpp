#include<bits/stdc++.h>
using namespace std;

queue<int> reverseQueue(queue<int> q)
{
    stack<int> st;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

    while(!q.empty()){
        cout << q.front() << " " ;
        q.pop();
    }
    return q;
}

int main(){
    queue<int> q;
    int value;
    while (cin >> value && value != -1) q.push(value);
    reverseQueue(q);
    return 0;
}