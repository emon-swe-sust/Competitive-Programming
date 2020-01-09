#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long x,y,i,j,k,l,dig3=0,dig2=0,dig=0,tot=0,m,n,lst=0;
        cin >> x >> y;
        if(x >= y)
            cout << "YES" << endl;
        else if(x == 1 || x == 3)
            cout << "NO" << endl;
        else if(x == 2 && y != 3)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
 
    }
    return 0;
}
