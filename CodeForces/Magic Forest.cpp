#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n,i,j,k,ans=0;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            if(((i^j) <= n) && ((i+j) > (i^j)) && ((i^j) >= j))
                ans++;
        }
    }
    cout << ans;
    return 0;
}
