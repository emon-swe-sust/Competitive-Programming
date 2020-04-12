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
        long long n,x,i,j,k,l,m=0,ans=0;
        cin >> n >> x;
        vector<long long>vec;
        for(i=0;i<n;i++)
        {
            cin >> k;
            k = k - x;
            if(k > 0)
            {
                m += k;
                ans++;
            }
            else
                vec.push_back(k);
        }
        sort(vec.begin(),vec.end());
        reverse(vec.begin(),vec.end());
        for(i=0;i<vec.size();i++)
        {
            if(vec[i] + m >= 0)
            {
                //cout << vec[i] << " " << m << endl;
                ans++;
                m+=vec[i];

            }
            else
                break;
        }
        cout << ans << endl;
    }

	return 0;
}
