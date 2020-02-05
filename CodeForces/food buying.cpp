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
        long long n,i,k=0,j,m,ans=0;
        cin >> n;
        k=n;
        while(k > 9)
        {
            n = k;
            ans += (n - n%10);
            k = n/10+n%10;
        }
        ans+=k;
        cout << ans << endl;
    }

	return 0;
}
