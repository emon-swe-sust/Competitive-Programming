#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        unsigned long long x,y,k,i,j,n,m;
        cin >> x >> y >> k;
        m = y*k+k;
        unsigned long long cur=1;

        j = (m-1) / (x-1);

        if((m-1) % (x-1) != 0)
            j++;

        j += k;
        cout << j << endl;
    }
    return 0;
}
