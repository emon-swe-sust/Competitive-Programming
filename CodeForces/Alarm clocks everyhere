#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,m,i,j,k,l,q;
    cin >> n >> m;
    cin >> k >> l;
    q = k;
    long long gcd=l-k;
    for(i=0;i<n-2;i++)
    {
        cin >> k;
        gcd=__gcd(gcd,k-l);
        l = k;
    }
    l = 0;
    for(i=0;i<m;i++)
    {
        cin >> k;
        if(gcd%k==0)
        {
            l = i+1;
        }
    }
    if(l!=0)
    {
        cout << "YES" << endl;
        cout << q << " " << l << endl;
        return 0;
    }
    else
    {
        cout << "NO" << endl;
        return 0;
    }
    return 0;
}
