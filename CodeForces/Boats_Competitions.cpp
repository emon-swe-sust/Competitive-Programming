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
        int n,i,j,k,ans=0;
        cin >> n;
        int arr[n],cnt[(2*n)+1];
        memset(cnt,0,sizeof(cnt));
        for(i=0;i<n;i++)
        {
            cin >> arr[i];
            cnt[arr[i]]++;
        }
        sort(arr,arr+n);
        for(i=1;i<=(n*2);i++)
        {
            int curr=0;
            int brr[(2*n)+1];
            for(j=0;j<(2*n)+1;j++)
                brr[j]=cnt[j];
            for(j=0;j<n;j++)
            {
                if(arr[j] >= i)
                    continue;
                if(arr[j] == abs(i-arr[j]))
                {
                    if(brr[arr[j]] > 1)
                    {
                        brr[arr[j]]-=2;
                        curr++;
                    }
                }
                else if(brr[abs(i-arr[j])] > 0 &&  brr[arr[j]] > 0)
                {
                    brr[abs(i-arr[j])]--;
                    brr[arr[j]]--;
                    curr++;
                }
            }
            ans = max(ans,curr);
        }
        cout << ans << endl;
    }
}