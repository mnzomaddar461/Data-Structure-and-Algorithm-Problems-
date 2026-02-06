#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<long long> A(n);
    for(int i=0;i<n;i++) cin >> A[i];

    const long long MOD = 1e9+7;
    unordered_map<long long,int> last_index;
    long long total = 0;
    long long curr_sum = 0;
    int left = 0;

    for(int right=0; right<n; right++){
        long long val = A[right];
        if(last_index.count(val) && last_index[val] >= left){
            int prev = last_index[val];
            for(int i=left; i<=prev; i++){
                curr_sum -= A[i];
            }
            left = prev + 1;
        }
        curr_sum += val;
        last_index[val] = right;
        total = (total + curr_sum) % MOD;
    }

    cout << total << "\n";
}
