#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long que;
    cin >> que;
    while(que--)
    {
        long long bal,chal,n,k,a,b,i,j,remain;
        cin >> k >> n >> a >> b;
        if(b*n >= k)
        {
            cout << -1 << endl;
            continue;
        }
        remain = k - (n*b);
        bal = a-b;
        if(remain%bal == 0)
        {
            cout << min(n,remain/bal-1) << endl;
            continue;
        }
        else
        {
            cout << min(n,remain/bal) << endl;
            continue;
        }
    }
    return 0;
}
