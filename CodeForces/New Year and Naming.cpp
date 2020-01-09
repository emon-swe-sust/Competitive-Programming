#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,m,q,k;
    cin >> n >> m;
    string str1[n+1],str2[m+1],str[n*m+1];

    for(i=1;i<=n;i++)
        cin >> str1[i];
    for(i=1;i<=m;i++)
        cin >> str2[i];

    cin >> q;

    for(i=0;i<q;i++)
    {
        cin >> k;
        if(k%n == 0)
            cout << str1[n];
        else
            cout << str1[k%n];
        if(k%m == 0)
            cout << str2[m] << endl;
        else
            cout << str2[k%m] << endl;
    }

    return 0;
}
