#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,i,j,k=0,l,m;
        int b = -1;
        string str;
        cin >> n >> str;
        if(n==1)
        {
            cout << -1 << endl;
            continue;
        }
        for(i=0;i<n;i++)
        {
            k += str[i]-'0';
            if(k%2 == 0 && (str[i]-'0')%2 == 1)
                break;
        }
        if(i == n){
            cout << -1 << endl;
            continue;
        }
        for(j=0;j<=i;j++)
            cout << str[j];
        cout << endl;
    }
    return 0;
}
