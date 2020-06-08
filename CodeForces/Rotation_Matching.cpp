#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int n,i,j;
    cin >> n;

    map<int,int> mpa,mpb;
    int diff[n+1],ans[n+1];

    memset(ans,0,sizeof(ans));

    for(i=1;i<=n;i++)
    {
        cin >> j;
        mpa[j] = i;
    }

    for(i=1;i<=n;i++)
    {
        cin >> j;
        mpb[j] = i;
    }

    for(i=1;i<=n;i++)
    {
        int k = mpa[i]-mpb[i];
        if(k < 0)
            k += n;
        diff[i] = k;
    }

    for(i=1;i<=n;i++)
        ans[diff[i]]++;

    sort(ans,ans+n+1);
    
    cout << ans[n] << endl;


	return 0;
}