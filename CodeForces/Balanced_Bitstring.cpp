#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n,k,i,j,m,tmp,ans=1,zero=0,one=0;
        string str;
        cin >> n >> k >> str;

        for(i=0;i<k;i++)
        {
            tmp = -1;

            for(j=i;j<n;j+=k)
            {
                if(str[j] != '?')
                {
                    if(tmp != -1 && str[j]-'0'!=tmp)
                    {
                        ans = 0;
                        goto here;
                    }
                    tmp = str[j] - '0';
                }
            }
            if(tmp != -1)
            {
                if(tmp == 0)
                    zero++;
                else
                    one++;
            }
        }
        here:;
        if(zero > k/2 || one > k/2)
            ans = 0;

        if(ans == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0; 
}