#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n,k,i,ans=INT_MAX;
        cin >> n >> k;
        if(k >= n)
        {
            cout << 1 << endl;
            continue;
        }
        for(i=1;i<=sqrt(n);i++)
        {
            if(i > k)
                break;
            if(n%i == 0)
            {
                if(n/i <= k)
                    ans = min(ans,i);
                else
                    ans = min(ans,n/i);
            }
                
        }
        cout << ans << endl;
    }

    return 0;
}