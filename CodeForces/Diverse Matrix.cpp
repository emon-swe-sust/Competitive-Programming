#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,c,i,j,k,l,m,n;
    cin >> r >> c;
    k=r+c;
    if( r==1 && c==1)
    {
         cout << 0;
         return 0;
    }
    if(r>1 && c > 1)
    {
        for(i=0; i<r; i++)
        {
            m=k;
            for(j=1; j<=c; j++)
                cout << m*j << " ";
            cout << endl;
            k--;
        }
    }
    else if(r == 1)
    {
        for(i=1;i<=c;i++)
            cout << i+1 << " ";
    }
    else if(c == 1)
    {
        for(i=1;i<=r;i++)
            cout << i+1 << endl;
    }
    return 0;
}
