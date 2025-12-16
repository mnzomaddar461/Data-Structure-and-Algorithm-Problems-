/* 
------------------------------Normal way but not TLE friendly-------------------
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, q;

    cin >> n >> q;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    for(int j = 0; j < q; j++){
        int l, r;
        int sum = 0;
        cin >> l >> r;

        for(int k = l - 1; k < r; k++){
            sum += v[k];
        }
        cout << sum << endl;
    }
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
// TLE Friendly 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<long long> prefixSum(n + 1, 0); 
    for (int i = 0; i < n; i++) {
        prefixSum[i + 1] = prefixSum[i] + v[i];
    }
    for(int j = 0; j < q ; j++) {
        int l, r;
        cin >> l >> r;
        long long range_sum = prefixSum[r] - prefixSum[l - 1]; 
        
        cout << range_sum << "\n";
    }

    return 0;
}