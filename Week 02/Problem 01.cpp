#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, count = 0;
    cin >> n;
    vector<int> v(n);
    for(int k = 0; k < n; k++){
        cin >> v[k];
    }
    for(int i = 0; i < n; i++){
        for(int j = 1 + i; j < n; j++){
            if(v[i] == v[j]){
                count = 1;
            }
        }
    }

    if(count == 1){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}