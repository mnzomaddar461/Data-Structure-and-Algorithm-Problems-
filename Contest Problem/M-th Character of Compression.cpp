#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    long long int seacchchar;
    cin >> s >> seacchchar;

    long long int currentLength = 0;

    for (int i = 0; i < s.size(); i++) {
        char ch = s[i];

        if (i + 1 < s.size() && isdigit(s[i + 1])) {
            int repeat = s[i + 1] - '0';

            if (currentLength + repeat >= seacchchar) {
                cout << ch << endl;
                return 0;
            }

            currentLength += repeat;
            i++; 
        }

        else {
            if (currentLength + 1 >= seacchchar) {
                cout << ch << endl;
                return 0;
            }
            currentLength += 1;
        }
    }

    return 0;
}
