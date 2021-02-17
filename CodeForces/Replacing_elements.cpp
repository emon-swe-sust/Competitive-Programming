#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int32_t main(){
	fast;
	int t;
	cin >> t;
	while(t--)
	{
		int n,d,i = 5,j,k=0;
		cin >> n >> d;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin >> arr[i];
			if(arr[i] > d)
				k = 1;
		}
		if(k == 0)
			cout << "YES" << endl;
		else
		{
			sort(arr, arr+n);
			if(arr[0]+arr[1] <= d)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
}