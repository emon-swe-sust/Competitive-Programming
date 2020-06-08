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
        long long n,k,i,j,l,dif=99999999999999999;
        cin >> n >> k;
        long long arr[n];
        for(i=0;i<n;i++)
            cin >> arr[i];
        sort(arr,arr+n);
        for(i=0;i<=n-k;i++)
        {
            dif = min(dif,arr[i+k-1]-arr[i]);
        }
        cout << dif << endl;
    }

	return 0;
}
