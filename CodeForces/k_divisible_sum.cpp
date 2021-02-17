#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


void solve(){
	ll n,k,rem;
	cin >> n >> k;
	if(k >= n){
		cout << k/n + min(k%n,1ll) << endl; 
	}else{
		// cout << n/k << " " << min(n%k,1ll) << endl;
		rem = n/k+min(n%k,1ll);
		// cout << rem << endl;
		rem = k*rem - n;
		// cout << rem << " " << rem/n << " " << min(n%rem, 1ll) << endl;
		cout << 1 + rem/n + min(rem%n, 1ll) << endl;
	}
}

int32_t main(){
	fast;
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}