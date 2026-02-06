#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long total = 0;

    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        total += a[i];
    }

    if(total % 2 != 0){
        cout << 0 << endl;
        return 0;
    }

    long long target = total / 2;
    long long prefix = 0;
    int count = 0;

    for(int i = 0; i < n - 1; i++){
        prefix += a[i];
        if(prefix == target)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
