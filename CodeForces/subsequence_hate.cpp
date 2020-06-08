#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        string str;
        int i,j,k=0,zero=0,one=0,ans;
        cin >> str;
        char ch;
        ch = str[0];
        
        ans = str.size();
        int x = 0;
        for(i=0;i<str.size();i++)
        {
            for(j=0;j<i;j++)
            {
                if(str[j] == '1')
                {
                    x++;
                   // cout << i ;
                }
            }
            for(j=i;j<str.size();j++)
            {
                if(str[j] == '0')
                {
                    x++;
                    //cout << i;
                }
            }
            ans = min(ans,x);
           // cout << ":: " << ans << " " << x << endl;
            x=0;
        }
        for(i=0;i<str.size();i++)
        {
            for(j=0;j<i;j++)
            {
                if(str[j] == '0')
                    x++;
            }
            for(j=i;j<str.size();j++)
            {
                if(str[j] == '1')
                    x++;
            }
            ans = min(ans,x);
            x=0;
        }
        cout << ans << endl;
    }

	return 0;
}