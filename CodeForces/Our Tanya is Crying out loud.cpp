#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n,k,a,b,x,i,j,amount = 0,l;
    cin >> n >> k >> a >> b;
    x=n;
    if(k == 1)
    {
        amount = (n-1)*a;
        cout << amount << endl;
        return 0;
    }
    while(x>1)
    {
        if(x < k)
        {
            amount = amount + (x-1)*a;
            x=1;
            continue;
 
        }
        if(x%k!=0 && x > k)
        {
            amount = amount + (x%k)*a;
            x=x-x%k;
            continue;
        }
        l = x/k;
        if((x-l)*a < b)
            amount = amount + (x-l)*a;
        else
            amount = amount + b;
            x = x/k;
         }
    cout << amount << endl;
    return 0;
}
