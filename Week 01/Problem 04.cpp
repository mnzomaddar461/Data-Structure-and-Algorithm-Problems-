#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin >> n ;
    cin.ignore();

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    set<int> s;
    for(int x : s){
        s.insert(x);
    }

    int cnt = 0;
    for(int x : v){
        if(s.count(x + 1)){
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}