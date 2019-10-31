#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
    int m,k,i,j,l;
    cin >> m >> k;
    int arr[m];
    vector<vector<int> >vec(200010);
    for(i=0;i<m;i++)
    {
        cin >> arr[i];
        vec[arr[i]].push_back(0);
    }
    for(i=0;i<m;i++)
    {
        int cnt = 0;
        while(arr[i] > 0)
        {
            cnt++;
            arr[i] /= 2;
            vec[arr[i]].push_back(cnt);
        }
    }
    int ans = INT_MAX;
    for(i=0;i<=200002;i++)
    {
        if(vec[i].size() >= k)
        {
            sort(vec[i].begin(),vec[i].end());
            int temp=0;
            for(j=0;j<k;j++)
            {
                temp+=vec[i][j];
            }
            ans = min(ans,temp);
        }
    }
    cout << ans << endl;
    return 0;
}
