#include<bits/stdc++.h>
using namespace std;
//- Asked in [Microsoft, Amazon] 
class MyStack {
public:
    queue<int> qe;
    MyStack() {
        
    }
    
    void push(int x) {
    qe.push(x);  
    }
    
    int pop() {
        queue<int> qe2;
        int value;
        while(!qe.empty()){
            value = qe.front();
            qe.pop();
            if(qe.empty() == true){
            break;    
            }
        qe2.push(value);
        }
        qe = qe2;
        return value; 
    }
    
    int top() {
        return qe.back();
    }
    
    bool empty() {
        return qe.empty();
    }
};
int main(){
    MyStack qe;
    int value;

    while(true){
        cin >> value;
        if(value == -1){
            break;
        }
        
        qe.push(value);
    }

    cout << "Current Top: " << qe.top() << endl;
    cout << "First Pop: " << qe.pop() << endl;
    if(!qe.empty()){
        cout << "Chack Empty: " << "Not Empty!" << endl;
    }
    else{
        cout << "Chack Empty: " << "Empty!" << endl;
    }
    
    return 0;
}