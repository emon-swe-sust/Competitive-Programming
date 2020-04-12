#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int n;
    cin >> n;

    int chk[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31}; // 95
    while(n--)
    {
        map<int,vector<int> >ch;
        map<int,int>anss;

        int m,i,j,k,l,ans=0;
        cin >> m;
        int arr[m];
        for(i=0;i<m;i++)
        {
            cin >> arr[i];
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<11;j++)
            {
                if(arr[i]%chk[j] == 0){
                    ch[chk[j]].push_back(arr[i]);
                    break;
                }
            }
        }
        for(i=0;i<11;i++)
        {
           // cout <<  chk[i] << " " << ch[chk[i]].size() << endl;
            if(ch[chk[i]].size() != 0)
                ans++;
        }
        cout << ans << endl;
        int cnt = 0;
        for(i=0;i<11;i++)
        {
            if(ch[chk[i]].size() != 0)
            {
                cnt++;
                for(j=0;j<ch[chk[i]].size();j++)
                {
                    anss[ch[chk[i]][j]] = cnt;
                }
            }
        }
        for(i=0;i<m;i++)
        {
            cout << anss[arr[i]] << " " ;
        }
        cout << endl;

    }

	return 0;
}
