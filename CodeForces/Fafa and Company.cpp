#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,ans=0,i;
    cin >> n;
    for(i=1;i<n;i++)
    {
        if(n%i == 0)
            ans++;
    }
    cout << ans << endl;
    return 0;
}
