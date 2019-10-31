#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,d,e,i,j,k,l,m,ans = 9999999999999999;
    i=0;
    j=0;
     cin >> n >> d >> e;
     e=e*5;
    while(1)
    {
       if(d*i > n)
            break;
       ans = min(ans,n-(d*i+((n-d*i)/e)*e));
       i++;
    }
    i=0;
    while(1)
    {
       if(e*i > n)
            break;
       ans = min(ans,n-(e*i+((n-e*i)/d)*d));
       i++;
    }
    cout << ans << endl;
    return 0;
}
