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
        long long n,d,x,i,j,k,l,m;
        cin >> n >> d;
        if(d <= n)
        {
            cout << "YES" << endl;
            continue;
        }
        else
        {
            for(i=0;i<=sqrt(d)+1;i++)
            {
                if(d%(i+1) == 0)
                {
                    if(i + (d/(i+1)) <= n)
                    {
                        cout << "YES" << endl;
                        goto here;
                    }
                }
                else
                {
                    //cout << i << " " << i + (d/(i+1))+1 << endl;
                    if(i + (d/(i+1))+1 <= n)
                    {
                        cout << "YES" << endl;
                        goto here;
                    }
                }
            }
            cout << "NO" << endl;
            here:;
        }
    }


	return 0;
}
