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
        int n,i,j,k,mx=0,dif=0;
        cin >> n;
        int arr[n];
        map<int,int>mp,taken;
        for(i=0;i<n;i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
            mx = max(mx,mp[arr[i]]);
        }
        if(n==1)
        {
            cout << 0 << endl;
            continue;
        }
        for(i=0;i<n;i++)
        {
            if(taken[arr[i]] == 0)
            {
                dif++;
                taken[arr[i]] = 1;
            }
        }

        //cout << dif << " " << mx << endl;
        dif--;
        if(dif+1 < mx)
            cout << dif+1 << endl;
        else
            cout << min(dif,mx) << endl;
    }
	return 0;
}
