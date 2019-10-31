#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n,ans=1;
    cin >> n;
    if(n%2 == 1)
        cout << 0;
    else
    {
        for(int i=0;i<n/2;i++)
            ans = ans*2;
        cout << ans ;
    }
    return 0;
}
