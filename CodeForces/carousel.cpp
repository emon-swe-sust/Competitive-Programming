#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	while(n--)
    {
        map<int,int> mp;
        int i,j,k,l,m,n,cnt=1;
        cin >> n;
        for(i=0;i<n;i++)
            cin >> l;
        if(n%2 == 0)
        {
            cout << 2 << endl;
            for(i=1;i<=n;i++)
            {
                if(i%2 == 0)
                    cout << 2 << " ";
                else
                    cout << 1 << " ";
            }

        }
        else
        {
            cout << 3 << endl;
            for(i=1;i<n;i++)
            {
                if(i%2 == 0)
                    cout << 2 << " ";
                else
                    cout << 1 << " ";
            }

            cout << 3;
        }
        /*
        for(i=0;i<n;i++)
        {
            cin >> k;
            arr[i]=k;
            if(mp[k] == 0)
            {
                mp[k] = cnt;
                cnt++;
            }
        }
        cnt--;
        cout << cnt << endl;
        for(i=0;i<n;i++)
        {
            cout << mp[arr[i]] << " ";
        }*/
        cout << endl;
    }


	return 0;
}
