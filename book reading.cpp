#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long t;
    cin >> t;
    while(t--)
    {
        long long m,n,i,j,k,l,ans,bal;
        cin >> m >> n;
        k = m/n;
        if(n%10 == 0)
            ans = 0;
        else if(n%5== 0)
            ans = (k/10)*25;
        else if(n%2==0)
            ans = (k/10)*40;
        else
            ans = (k/10)*45;
 
        l = (k-k%10)*n;
        //cout << l << " " << ans << endl;
 
        while(1)
        {
            l = l + n;
            if(l > m)
                break;
            ans += l%10;
            //cout << ans << " " << l << endl;
        }
        cout << ans << endl;
    }
    return 0;
}
