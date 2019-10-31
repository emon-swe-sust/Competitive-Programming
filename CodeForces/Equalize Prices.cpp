#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long que,n,i,j,k;
    cin >> que;
    while(que--)
    {
        cin >> n >> k;
        long long arr[n];
        long long ans,minn = 100000000000,maxx = -1000000000000;
        for(i=0;i<n;i++)
        {
            cin >> arr[i];
            minn=min(minn,arr[i]);
            maxx=max(maxx,arr[i]);
        }
        ans = minn+k;
        if(abs(ans-maxx)>k)
            cout << -1 << endl;
        else
            cout << ans << endl;
        here:;
    }
    cin >> n;
    return 0;
}
