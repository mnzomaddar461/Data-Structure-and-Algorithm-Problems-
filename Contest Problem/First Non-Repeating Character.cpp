#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> freq(26, 0);

    for (char ch : s) {
        freq[ch - 'a']++;
    }

    for (char ch : s) {
        if (freq[ch - 'a'] == 1) {
            cout << ch << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
