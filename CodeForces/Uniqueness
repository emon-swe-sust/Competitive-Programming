#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long n,i,j,del=0,k,l,left,right,midl,midr,ans = 2000;
 
    map<long,long> mp,mp1;
    cin >> n;
    long long arr[n];
 
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
        if(mp[arr[i]]>1)
            del++;
    }
 
    if(del == 0)
    {
        cout << 0 << endl;
        return 0;
    }
 
    for(i=0;i<n;i++)
    {
        mp1=mp;
        long long cnt=0;
        for(j=i;j<n;j++)
        {
            if(mp1[arr[j]] > 1)
            {
                mp1[arr[j]]--;
                cnt++;
            }
            //cout << cnt << " " << del << " " << i << " " << j << endl;
            if(cnt == del)
            {
                ans = min(ans,j-i+1);
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
