#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while(t--)
    {
        long long a,b,x,y,n,i,j,mina,minb,appn;
        cin >> a >> b >> x >> y >> n;
        mina = a-x;
        minb = b-y;
        appn = mina+minb;
        if(appn <= n)
            cout << x*y << endl;
        else
        {
            long long aa,bb,tx,ty;
            
            bb = b;
            aa = a;
            tx = n;
            b = max(y,b-n);
            n -= bb-b;
            a = max(x,a-n);
            long long ansa,ansb;
            ansa = a*b;
            n = tx;
            a = aa;
            b = bb;
            a = max(x,a-n);
            n -= aa-a;
            b = max(y,b-n);
            ansb = a*b;
            cout << min(ansa,ansb) << endl;
        }
    }
}