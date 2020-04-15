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
        int x,n,m,i,j,k;
        cin >> x >> n >> m;
        while(n>0)
        {
            if(x < 21)
                break;
            x = x/2 + 10;
            n--;

        }

        if (m*10 >= x)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }


	return 0;
}
