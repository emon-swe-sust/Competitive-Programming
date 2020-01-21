#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        long long n,s,k,j,ans=999999999999,m;
        cin >> n >> s >> k;
        map<long long , int>mp;
        for(long long i=0;i<k;i++)
        {
            cin >> m;
            mp[m]=1;
        }
        for(long long i=s;i<=n;i++)
        {
            if(mp[i] != 1)
            {
                ans = i-s;
                break;
            }
        }
        for(long long i=s;i>0;i--)
        {
             if(mp[i] != 1)
             {
                ans = min(ans,s-i);
                break;
             }
        }
        cout << ans << endl;
    }
	return 0;
}
