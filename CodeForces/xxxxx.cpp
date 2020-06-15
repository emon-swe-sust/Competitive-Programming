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
        long long n,x,i,j=0,kk=0,ans=0;
        cin >> n >> x;
        long long arr[n+1];
        cin >> arr[1];
        if(arr[1] % x != 0)
            kk = 1;
        for(i=2;i<=n;i++)
        {
            cin >> arr[i];
            if(arr[i] % x != 0)
                kk = 1;
            arr[i] += arr[i-1];
        }
        if(kk == 0)
        {
            cout << -1 << endl;
            continue;
        }
        for(i=1;i<=n;i++)
            arr[i] %= x;
        long long before,after;
        for(i=1;i<=n;i++)
        {
            if(arr[i] % x != 0)
            {
                before = i;
                break;
            }
        }
        for(i=n;i>0;i--)
        {
            if(arr[i] % x != 0)
            {
                after = i;
                break;
            }
        }
        //cout << after << " " << n << " " << before << " " << n-before << endl;
        cout << max(after,n-before) << endl;
    }

    return 0;
}