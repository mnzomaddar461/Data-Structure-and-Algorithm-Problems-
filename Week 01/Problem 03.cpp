#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    cin.ignore();
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] < 0){
            v[i] = 2;
        }
        else if(v[i] == 0){
            v[i] = 0;
        }
        else{
            v[i] = 1;
        }
    }

    for(int j : v){
        cout << j << " ";
    }

    
    return 0;
}