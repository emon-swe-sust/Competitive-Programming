#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<pair<int, int> > bal;
    map<int, int> m;

    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;

        bal.push_back({a, b});
        m[a]++;
        m[b]++;
    }
    int t1 = -1, t2 = -1;
    int mans[n - 1];
    memset(mans, -1, sizeof(mans));

    for (int i = 0; i < bal.size(); i++)
    {
        int a, b;
        a = bal[i].first;
        b = bal[i].second;
        if (m[a] > 2)
        {
            t1 = a;
            break;
        }
        else if (m[b] > 2)
        {
            t2 = b;
            break;
        }
    }
    int chal = 0;
    if (t1 != -1)
    {
        for (int i = 0; i < n - 1; i++)
        {
            int a, b;
            a = bal[i].first;
            b = bal[i].second;
            if (a == t1 || b == t1)
            {
                mans[i] = chal;
                chal++;
            }
        }
        t1 = 0;
    }
    if (t1 != 0 && t2 != -1)
    {
        for (int i = 0; i < n - 1; i++)
        {
            int a, b;
            a = bal[i].first;
            b = bal[i].second;
            if (b == t2 || a == t2)
            {
                mans[i] = chal;
                chal++;
            }
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (mans[i] != -1)
        {
            cout << mans[i] << endl;
        }
        else
        {
            cout << chal << endl;
            chal++;
        }
    }
}
