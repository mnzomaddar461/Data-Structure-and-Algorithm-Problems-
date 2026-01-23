#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> array(n);
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    sort(array.begin(), array.end());

        cout << array[m - 1] << endl;

    return 0;
}
