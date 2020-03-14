#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long n, g, b;
        long long ans = 0;
        cin >> n >> g >> b;

        if (g >= b)
            ans = n;
        else
        {
            long long x,y,good,bad,badhigh,bakigood;
            x = (n + 1) / 2;
            y = n - x;
            good = (x + (g - 1)) / g;
            bad = (good - 1) * b;

            badhigh = min(y, bad);
            good = n - badhigh;

            ans = good + bad;
        }
        cout << ans << endl;
    }
    return 0;
}
