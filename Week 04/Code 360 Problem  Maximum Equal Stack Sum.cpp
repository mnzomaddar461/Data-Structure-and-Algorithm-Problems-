#include<bits/stdc++.h>
using namespace std;

int getsum(stack<int> st){
    int sum = 0;
    while (!st.empty()){
        sum += st.top();
        st.pop();
    }
    return sum;
}

int maxSum(stack<int> &stk1, stack<int> &stk2, stack<int> &stk3) {
    int sum1 = getsum(stk1);
    int sum2 = getsum(stk2);
    int sum3 = getsum(stk3);

    while (true){
        if(stk1.empty() || stk2.empty() || stk3.empty()){
            return 0;
        }

        if(sum1 == sum2 && sum2 == sum3){
            return sum1;
        }

        if(sum1 >= sum2 && sum1 >= sum3){
            sum1 -= stk1.top();
            stk1.pop();
        }
        else if(sum2 >= sum1 && sum2 >= sum3){
            sum2 -= stk2.top();
            stk2.pop();
        }
        else{
            sum3 -= stk3.top();
            stk3.pop();
        }
    }
}

int main(){
    stack<int> stk1, stk2, stk3;
    int value;

    while (cin >> value && value != -1) stk1.push(value);
    while (cin >> value && value != -1) stk2.push(value);
    while (cin >> value && value != -1) stk3.push(value);

    cout << maxSum(stk1, stk2, stk3) << endl;
    return 0;
}
