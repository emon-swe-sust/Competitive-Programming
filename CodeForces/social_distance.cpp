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
        int n,i,j,k,l,d;
        cin >> n >> k;
        l = n;
        int arr[n];
        string str;
        cin >> str;
        vector<int>vec;
        for(i=0;i<n;i++)
        {
            if(str[i]=='1')
                arr[i] = 1;
            else
                arr[i] = 0;
        }
        for(i=0;i<n;i++)
        {
            if(arr[i] == 1)
            {
                vec.push_back(i);
            }
        }
        if(vec.size() == 0)
        {
            cout << n/(k+1) + min(1,n%(k+1)) << endl;
            continue;
        }
        int gap = vec[0]-k;
        int ans = 0;
        if(gap%(k+1)==0&&gap>0)
            ans += gap/(k+1);
        else if(gap>0)
            ans += gap/(k+1)+1;
        for(i=1;i<vec.size();i++)
        {
            gap = vec[i]-vec[i-1]-1-2*k;
            if(gap%(k+1)==0 && gap > 0)
                ans += gap/(k+1);
            else if(gap > 0)
                ans += gap/(k+1)+1;
        }
        gap = n-vec[vec.size()-1]-1-k;
        if(gap%(k+1)==0 && gap > 0)
            ans += gap/(k+1);
        else if(gap > 0)
            ans += gap/(k+1)+1;
        cout << ans << endl;
    }
	return 0;
}