#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


void solve(){
	int n,k;
	cin >> n >> k;
	ll arr[n],summ[n],req[n],add=0ll;
	summ[0] = 0ll;
	req[0] = 0ll;
	for(int i=0;i<n;i++){
		cin >> arr[i];
		if(i > 0){
			summ[i] = arr[i-1] + summ[i-1];
			req[i] = (100*arr[i])/k + min((100ll*arr[i])%k,1ll);
		}
	}
	for(int i=1;i<n;i++){
		if(req[i] > summ[i]){
			ll rem = req[i]-summ[i];
			add += rem;
			for(int j=i;j<n;j++){
				summ[j] += rem;
			}
		}
	}
	cout << add << endl;
	return;
}

int32_t main(){
	fast;
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
