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
        long long n,i,j,k,l,m,ans=0;
        cin >> n;
        map<long long,int> mp;
        for(i=0;i<n;i++)
        {
            cin >> k;
            if(mp[k] != 1)
            {
                mp[k] = 1;
                ans++;
            }
        }
        cout << ans << endl;
	}
	return 0;
}

