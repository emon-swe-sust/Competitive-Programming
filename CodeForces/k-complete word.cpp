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
        int n,k,i,j,l;
        string str;
        cin >> n >> k;
        int arr[k+1][26];
        memset(arr,0,sizeof(arr));

        cin >> str;
        str = "." + str;
        int bal = 2,chal=1;
        for(i=1;i<str.size();i++)
        {
            if(k%2 == 1)
            {
                if((i%k) <= (k/2) && i%k != 0)
                    arr[(i%k)][str[i]-'a']++;
                else
                {
                    if(i%k == 0)
                    {
                        arr[1][str[i]-'a']++;
                        bal = 2;
                    }
                    else if(i%k == k/2+1)
                        arr[k/2+1][str[i]-'a']++;
                    else
                    {
                        arr[(i%k)-bal][str[i]-'a']++;
                        bal += 2;
                    }
                }

            }
            else
            {
                if((i%k) <= k/2 && i%k !=0)
                    arr[(i%k)][str[i]-'a']++;
                else
                {
                    if(i%k == 0)
                    {
                        arr[1][str[i]-'a']++;
                        chal=1;
                    }
                    else
                    {
                        arr[(i%k)-chal][str[i]-'a']++;
                        chal += 2;
                    }
                }
            }
        }



        int ans = 0;
        for(i=1;i<=k/2;i++)
        {
            int mx=0;
            for(j=0;j<26;j++)
                mx = max(mx,arr[i][j]);
            ans += (n/k)*2 - mx;
        }
        if(k%2 == 1)
        {

            int mx=0;
            for(j=0;j<26;j++)
                mx = max(mx,arr[k/2+1][j]);
            ans += (n/k)-mx;
        }
        cout << ans << endl;
    }

	return 0;
}
