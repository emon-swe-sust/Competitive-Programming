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
        long long digit,n,i,j,ans=0,mul=1;
        cin >> n;
        digit = log2(n);
        //cout << digit << endl;
        if(n == 1)
            cout << 1 << endl;
        else
        {
            digit++;
            for(i=0;i<digit;i++)
            {
                ans += n/mul;
                mul *= 2;
            }
            cout << ans << endl;
        }
    }
    return 0;
}