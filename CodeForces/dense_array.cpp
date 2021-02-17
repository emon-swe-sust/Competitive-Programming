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
		int n,count=0;
		cin >> n;
		int arr[n];
		cin >> arr[0];
		for(int i=1;i<n;i++){
			cin >> arr[i];
			int maxx = max(arr[i],arr[i-1]);
			int minn = min(arr[i],arr[i-1]);
			while(minn * 2 < maxx){
				minn *= 2;
				count++;
			}

		}
		cout << count << endl;
	}
}