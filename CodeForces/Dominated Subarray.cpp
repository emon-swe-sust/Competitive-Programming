#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,i,j,k,l,m,ans;
        cin >> n;
        ans = n+100;
        int arr[n+1],cnt[n+1];
        memset(arr,0,sizeof(arr));
        memset(cnt,0,sizeof(cnt));
        for(i=1;i<=n;i++)
        {
            cin >> k;
            if(arr[k] == 0)
                arr[k] = i;
            else
            {
                ans = min(ans,i-arr[k]+1);
                arr[k] = i;
            }
        }
        if(n < 2)
        {
            cout << -1 << endl;
            continue;
        }
        if(ans == n+100)
        {
            cout << -1 << endl;
        }
        else
            cout << ans << endl;
    }
    return 0;
}
