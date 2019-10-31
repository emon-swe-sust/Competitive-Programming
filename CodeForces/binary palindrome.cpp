#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int n, ans = 0,i,j;
        cin >> n;
        string str;
        int baal = 0, odd = 0;
        for(i=0; i<n; i++)
        {
            cin >> str;
            if(str.length()%2==1) 
            {
                odd++;
                continue;
            }
            int zero = 0, one = 0;
            for(j=0; j<str.length(); j++) 
            {
                if(str[j]=='0')
                    zero++;
                else
                    one++;
            }
            if(zero%2==1) 
                baal++;
        }
 
        if(baal%2==1 && odd==0) 
            cout << n-1 << endl;
        else 
            cout << n << endl;
    }
    return 0;
