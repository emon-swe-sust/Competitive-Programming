#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
	ll n,maxx = 0;
	cin >> n;
	ll a[n],b[n],c[n];
	
	for(int i=0;i<n;i++){
		cin >> c[i];
		c[i]--;
	}
	for(int i=0;i<n;i++)
		cin >> a[i];
	for(int i=0;i<n;i++)
		cin >> b[i];

	ll curr = c[n-1];

	for(int i=n-1;i>0;i--){
		if(c[i] > curr)
			curr = c[i];
		if(a[i] == b[i]){
			curr += 2;
			maxx = max(maxx, curr);
			curr = c[i-1];
		}else{
			curr += 2;
			if(i != 1)
				curr += c[i-1] - abs(a[i]-b[i]);
			else
				curr += abs(a[i]-b[i]);
		}
		// cout << i << " " <<curr << " " << maxx << endl;
	}
	cout << max(maxx, curr) << endl;
}

int32_t main(){
	fast;
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
