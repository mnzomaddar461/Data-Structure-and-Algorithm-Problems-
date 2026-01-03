#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<long long int> total;

    for(int i = 0; i < n; i++) {
        long long int sum = 0;
        bool ifZero = false;

        for(int j = 0; j < m; j++) {
            long long int value;
            cin >> value;
            sum += value;
            if(value == 0) ifZero = true;
        }

        if(!ifZero) {
            total.push_back(sum);
        }
    }

    if(total.empty()) {
        cout << "YES\n";
        return 0;
    }

    for(int i = 1; i < total.size(); i++) {
        if(total[i] != total[0]) {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;
}
