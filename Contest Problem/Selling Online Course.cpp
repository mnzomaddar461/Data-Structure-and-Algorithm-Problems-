#include <bits/stdc++.h>
using namespace std;

int main() {
    long long price_of_one_course;
    cin >> price_of_one_course;

    if (price_of_one_course == 0) {
        cout << 0 << endl;
        return 0;
    }

    long long result = (500 + price_of_one_course - 1) / price_of_one_course;
    cout << result << endl;

    return 0;
}
