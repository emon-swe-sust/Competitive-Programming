#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int32_t main(){
	fast;
	int t;
	cin >> t;
	while(t--){
		int n,i,j;
		cin >> n;
		int arr[n],ans[n];
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		for(int i = n-1; i>=0 ;i--){
			j = i + arr[i];
			ans[i] = arr[i];
			if(j < n)
				ans[i] += ans[j];
		}
		int anss = 0;
		for(i=0;i<n;i++)
			anss = max(anss,ans[i]);
		cout << anss << endl;
	}
}