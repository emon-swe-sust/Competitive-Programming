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
        int n,i,j,k,l;
        cin >> n;
        string str;
        cin >> str;
        int ans1[n],ans2[n];
        int bo = 0;
        for(i=0;i<n;i++)
        {
            if(str[i] == '2')
            {
                if(bo == 0)
                {
                    ans1[i] = 1;
                    ans2[i] = 1;
                }
                else
                {
                    ans1[i] = 0;
                    ans2[i] = 2;
                }
            }
            else if(str[i] == '0')
            {
                ans1[i] = 0;
                ans2[i] = 0;
            }
            else
            {
                if(bo == 0)
                {
                    ans1[i] = 1;
                    ans2[i] = 0;
                    bo = 1;
                }
                else
                {
                    ans1[i] = 0;
                    ans2[i] = 1;
                }
            }
        }
        for(i=0;i<n;i++)
            cout << ans1[i];
        cout << endl;
        for(i=0;i<n;i++)
            cout << ans2[i];
        cout << endl;
    }

	return 0;
}
