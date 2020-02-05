
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int q;
    cin >> q;
    while(q--)
    {
        int n,ans=0,odd=0,even=0;
        cin >> n;
        while(n--)
        {
            int k;
            cin >> k;
            if(k%2==1)
                odd++;
            else
                even++;
            ans+=k;
        }
        if(ans%2 == 1 || (odd > 0 && even > 0))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

	return 0;
}
