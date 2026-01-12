#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> qe;
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