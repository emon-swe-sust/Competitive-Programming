#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for(int i=1;i<=test;i++)
    {
        int n,j,k,ans=0;
        cin >> n;
        while(n--)
        {
            cin >> k;
            ans = max(ans,k);
        }
        cout << "Case " << i << ": " << ans << endl;
    }
}
