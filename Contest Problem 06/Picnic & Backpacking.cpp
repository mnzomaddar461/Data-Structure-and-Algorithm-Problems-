#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, m;
        cin >> n >> m;

        vector<long long> tom(n), jary(m);

        for(int i = 0; i < n; i++)
        {
            cin >> tom[i];
        }

        unordered_map<long long, long long> freq;

        for(int i = 0; i < m; i++)
        {
            cin >> jary[i];
            freq[jary[i]]++;
        }

        long long K;
        cin >> K;
        long long count = 0;
            for(int i = 0; i < n; i++)
            {
                long long need = K - tom[i];
                if(freq.find(need) != freq.end())
                {
                    count += freq[need];
                }
            }
        cout << count << endl;
    }

    return 0;
}
