#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, value;
    cin >> n >> m;

    if(n != m){
        cout << "NO" << endl;
        return 0;
    }

    stack<int> st;
    queue<int> q;

    for(int i = 0; i < n; i++){
        cin >> value;
        st.push(value);
    }

    for(int i = 0; i < m; i++){
        cin >> value;
        q.push(value);
    }

    while(!st.empty() && !q.empty()){
        if(st.top() != q.front()){
            cout << "NO" << endl;
            return 0;
        }
        st.pop();
        q.pop();
    }

    cout << "YES" << endl;
    return 0;
}
