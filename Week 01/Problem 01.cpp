#include<bits/stdc++.h>
using namespace std;
// Contest 
int main(){
    int n;
    cin >> n;
    cin.ignore();
    vector<int> a(n), b(n);
    vector<int> c;
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int j = 0; j < n; j++){
        cin >> b[j];
    }

    c.insert(c.end(), b.begin(), b.end());
    c.insert(c.end(), a.begin(), a.end());

    for(int k : c){
        cout << k << " " ;
    }

    return 0;
}