#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while(t--)
    {
        long long a,b,i,j,k;
        cin >> a >> b;
        k = abs(a-b);
        long long ans = k/10;
        if(k%10 != 0)
            ans++;
        cout << ans << endl;
    }
}