#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cout << i;
    }
    cout << "\n";

    for (int i = 2; i <= N - 1; i++) {
        cout << i;
        for (int space = 1; space <= N - 2; space++) {
            cout << " ";
        }
        cout << (N - i + 1) << "\n";
    }

    if (N > 1) {
        for (int i = N; i >= 1; i--) {
            cout << i;
        }
        cout << "\n";
    }

    return 0;
}
