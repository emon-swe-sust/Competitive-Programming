#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
    int n,i,j,k,l,ans=0;
    cin >> n;
    int arr[n+1];
    memset(arr,0,sizeof(arr));
    vector<int>in,out;
    for(i=0;i<n;i++)
    {
        cin >> k;
        in.push_back(k);
    }
    for(i=0;i<n;i++)
    {
        cin >> k;
        out.push_back(k);
    }
    reverse(in.begin(),in.end());
    reverse(out.begin(),out.end());
    j=0;
    for(i=0;i<n;i++)
    {
        while(arr[out[j]]!=0)
        {
            if(j<n-1)
                j++;
        }
        if(in[i]!=out[j])
        {
            ans++;
            arr[in[i]] = 1;
        }
        else
            j++;
    }
    cout << ans << endl;
	return 0;
}
