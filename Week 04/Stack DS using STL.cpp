#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st; // STL
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        st.push(x);
    }
    if(!st.empty()){
        cout << "Current Top: " << st.top() << endl;;
    }
    cout << "Original Stack: " << endl;;
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    
    return 0;
}