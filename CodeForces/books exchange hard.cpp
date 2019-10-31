#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int q;
	cin >> q;
	while(q--)
    {
        int n,i,j,k,l,m,len;
        cin >> n;
        int arr[n+1],ans[n+1],visit[n+1];
        memset(visit,0,sizeof(visit));
        for(i=1;i<=n;i++)
            cin >> arr[i];
 
        for(i=1;i<=n;i++)
        {
            if(visit[i] == 0)
            {
                vector<int>vec;
                len = 1;
                if(i == arr[i])
                {
                    ans[i] = len;
                    visit[i] = true;
                }
                else
                {
                    m = arr[i];
                    k = arr[m];
                    visit[i] = 1;
                    visit[m] = 1;
                    vec.push_back(i);
                    vec.push_back(m);
                    visit[i] = 1;
                    visit[m] = 1;
                    while(arr[k] != m)
                    {
                        visit[k] = 1;
                        vec.push_back(k);
                        k = arr[k];
                    }
                }
                for(j=0;j<vec.size();j++)
                    ans[vec[j]] = vec.size();
            }
        }
        for(i=1;i<=n;i++)
            cout << ans[arr[i]] << " " ;
        cout << endl;
    }
    return 0;
}
