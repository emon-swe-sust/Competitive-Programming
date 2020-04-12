#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    long long  t,a,b,c,n,k,x;

    cin >> t;

    while( t-- )
    {
        cin >> n;
        long long a[n], b[n], c[n];
        for(int i = 0; i < n; i++ )
            cin >> a[i] >> b[i];


        c[0] =  max((long long)0, (a[0] - b[n - 1]));

        long long sum = c[0];

        for( int i = 1; i < n; i++ )
        {
            c[i] = a[i] - b[i - 1];
            c[i] = max( (long long)0, c[i] );
            sum += c[i];
        }

        long long ans = a[0] - c[0] + sum;
        long long temp;
        for(int i = 1; i < n; i++ )
        {
            temp = a[i] - c[i] + sum;
            ans = min( ans, temp );
        }

        cout << ans << endl;
    }

    return 0;
}
