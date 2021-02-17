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
        long long n,i,j,as=999999999999999,bs=999999999999999,ans=0;
        cin >> n;
        long long arr[n],brr[n];
        for(i=0;i<n;i++)
        {   
            cin >> arr[i];
            as = min(as,arr[i]);
        }
        for(i=0;i<n;i++)
        {   
            cin >> brr[i];
            bs = min(bs,brr[i]);
        }
        for(i=0;i<n;i++)
        {
            arr[i]-=as;
            brr[i]-=bs;
            ans+=max(arr[i],brr[i]);
        }
        cout << ans << endl;
    }
}