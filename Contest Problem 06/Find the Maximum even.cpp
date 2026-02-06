#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long firstEven = -1, secondEven = -1;
    long long firstOdd = -1, secondOdd = -1;

    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;

        if (x % 2 == 0)
        {
            if (x > firstEven)
            {
                secondEven = firstEven;
                firstEven = x;
            }
            else if (x > secondEven)
            {
                secondEven = x;
            }
        }
        else
        {
            if (x > firstOdd)
            {
                secondOdd = firstOdd;
                firstOdd = x;
            }
            else if (x > secondOdd)
            {
                secondOdd = x;
            }
        }
    }

    long long ans = -1;

    if (firstEven != -1)
        ans = max(ans, firstEven);

    if (secondEven != -1)
        ans = max(ans, firstEven + secondEven);

    if (secondOdd != -1)
        ans = max(ans, firstOdd + secondOdd);

    cout << ans << endl;

    return 0;
}
