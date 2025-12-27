#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    vector<long long int> prefixsum(n);
    prefixsum[0] = v[0];

    for(int i = 1; i < n; i++){
        prefixsum[i] = prefixsum[i - 1] + v[i];
    }

    reverse(prefixsum.begin(), prefixsum.end());

    for(int i = 0; i < n; i++){
        cout << prefixsum[i] << " ";
    }

    return 0;
}
