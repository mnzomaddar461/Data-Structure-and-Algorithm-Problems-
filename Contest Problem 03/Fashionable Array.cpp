// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while (t--){
//         int n;
//         cin >> n;
//         int array[n];
//         for(int i = 0; i < n; i++){
//             cin >> array[i];
//         }

//         sort(array, array + n);

//         int mn = array[0];
//         int mx = array[n - 1];

//         if(mn % 2 == mx % 2){
//             cout << 0 << endl;
//         }
//         else{
//             int count1 = 0, count2 = 0;

//             int i = 0;
//             while(array[i] % 2 != mx % 2){
//                 i++;
//                 count1++;
//             }

//             int j = n - 1;
//             while(array[j] % 2 != mx % 2){
//                 j--;
//                 count2++;
//             }

//             cout << min(count1, count2) << endl;
//         }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        // already fashionable
        if ((a[0] + a[n-1]) % 2 == 0){
            cout << 0 << endl;
            continue;
        }

        int ans = n;

        // remove from front
        for(int i = 0; i < n; i++){
            if ((a[i] + a[n-1]) % 2 == 0){
                ans = min(ans, i);
                break;
            }
        }

        // remove from back
        for(int i = n - 1; i >= 0; i--){
            if ((a[0] + a[i]) % 2 == 0){
                ans = min(ans, n - 1 - i);
                break;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
