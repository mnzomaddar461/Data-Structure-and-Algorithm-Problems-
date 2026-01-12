#include<bits/stdc++.h>
using namespace std;

class myQueue{
    public:
        list<int> li;

        void push(int value){
            li.push_back(value);
        }

        void pop(){
            li.pop_front();
        }

        int front(){
            return li.front();
        }

        int back(){
            return li.back();
        }

        int size(){
            return li.size();
        }

        bool empty(){
            return li.empty();
        }
};
int main(){
    myQueue qe;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        qe.push(x);
    }

    cout << "Current Font, Back & Size: " << qe.front() << " , " << qe.back() << " & " << qe.size() << endl;

    while(!qe.empty()){
        cout << qe.front() << endl;
        qe.pop();
    }
    return 0;
}