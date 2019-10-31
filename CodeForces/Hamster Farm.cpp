#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    unsigned long long ans,i,j,tot,mod=INT_MAX,n,k;
    cin >> n >> k;
    unsigned long long a[k];
    cin >> a[0];
    mod = n%a[0];
    tot = n/a[0];
    ans = 1;
    for(i=1;i<k;i++)
    {
        cin >> a[i];
 
        if((n%a[i]) < mod)
        {
            mod = n%a[i];
            tot = n/a[i];
            ans = i+1;
            //cout << "AS";
        }
    }
    cout << ans << " " << tot << endl;
    return 0;
}
