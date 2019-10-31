#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,b,g,i,j,k,l,m;
    cin >> b >> g >> n;
    m = min(b,min(n,g))+1;
    i=0;
    int maxx = max(b,g);
    while(1)
    {
        if(n-i > maxx)
        {
            m--;
            i++;
        }
        else break;
    }
    cout << m << endl;
 
    return 0;
}
