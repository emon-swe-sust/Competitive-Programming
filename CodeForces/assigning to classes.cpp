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
        int n,i,j,k,l,m;
        cin >> n;
        long long arr[2*n];
        for(i=0;i<2*n;i++)
            cin >> arr[i];
        sort(arr,arr+2*n);
        cout << arr[n] - arr[n-1] << endl;
    }

	return 0;
}
