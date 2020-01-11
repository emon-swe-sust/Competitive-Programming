#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    long long ansm,ansn,x,i,k,l,m,n,ans=999999999999999999;
    cin >> x;
    for(i=1;i<=sqrt(x);i++)
    {
        if(x%i == 0)
        {
            m = i;
            n = x/i;
            k = gcd(m,n);
            if(k == 1)
            {
                if(m+n < ans)
                {
                    ans = min(ans,m+n);
                    ansm = m;
                    ansn = n;
                }
            }
        }
    }
    cout << ansm << " " << ansn << endl;
    return 0;
}
