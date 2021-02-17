#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
map<ll,ll>mp,mp2;

void solve() {
	ll x;
	cin >> x;
	mp2=mp;
	for(auto it : mp){
		if(x < it.first){
			break;
		}
		if(mp2[x - it.first]){
			// cout << x << " " << it.first << " " << x-it.first << "YES" << endl;
			cout << "YES" << endl;
			return;
		}
	}
	cout << "NO" << endl;
}


int32_t main(){
	fast;
	for(ll i=1;i<=10000;i++)
		mp[i*i*i] = 1;

	int t;
	cin >> t;
	while(t--){
		solve();
	}
}