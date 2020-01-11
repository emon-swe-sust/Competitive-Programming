#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,l,r;
    l=0;
    r=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> k;
        if(k == 'L')
            l++;
        else
            r++;
    }
    cout << l+r+1 << endl;
    return 0;
}
