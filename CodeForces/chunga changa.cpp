
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long xn,yn,x,y,p,tot;
    cin >> x >> y >> p;
    tot = x/p+y/p;
 
    xn = x%p;
    yn = y%p;
 
    if(xn+yn >= p)
    {
        cout << tot+1 << " " << min(p-xn,p-yn) ;
    }
    else
        cout << tot << " " << 0 ;
    return 0;
}
