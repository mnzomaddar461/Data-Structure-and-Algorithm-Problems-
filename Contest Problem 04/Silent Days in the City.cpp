#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    vector<int> arr2(n, -1); 

    for(int i = 0; i + 2 < n; i++) {
        if(arr[i] > arr[i + 1] && arr[i + 1] < arr[i + 2]) {
            arr2[i + 1] = arr[i + 1]; 
        }
    }

    int q;
    cin >> q;
    while (q--) {
        int l,r;
        cin >> l >> r;
        int silentDays = 0;

        for(int i = l; i <= r; i++){   
            if(arr2[i - 1] != -1){     
                silentDays++;
            }
        }

        cout << silentDays << endl;
    }

    return 0;
}

/*
This code for Time complexity frendly & well Opimized
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);  // Fast I/O
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    // Step 1: Identify local minima
    vector<int> arr2(n, -1);
    for(int i = 0; i + 2 < n; i++) {
        if(arr[i] > arr[i + 1] && arr[i + 1] < arr[i + 2]) {
            arr2[i + 1] = arr[i + 1]; 
        }
    }

    // Step 2: Build prefix sum array for fast query
    vector<int> pref(n + 1, 0);  // 1-based
    for(int i = 0; i < n; i++) {
        pref[i + 1] = pref[i] + (arr2[i] != -1 ? 1 : 0);
    }

    // Step 3: Answer queries in O(1)
    int q;
    cin >> q;
    while(q--) {
        int l, r;
        cin >> l >> r;
        int silentDays = pref[r] - pref[l - 1];
        cout << silentDays << "\n";
    }

    return 0;
}
*/