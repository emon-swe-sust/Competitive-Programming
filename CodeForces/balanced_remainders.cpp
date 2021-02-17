#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


void solve(){
	int n,c[3],strt,move=0;
	memset(c,0,sizeof(c));
	cin >> n;
	int arr[n],cnt = 0;
	for(int i=0;i<n;i++){
		cin >> arr[i];
		c[arr[i]%3]++;
	}
	while(1){
		for(int i=0;i<3;i++){
			int bal=max(c[i%3]-n/3,0);
			move += bal;
			c[(i+1)%3] += bal;
			c[i%3] -= bal;
		}
		if(c[0] == c[1] && c[1] == c[2])
			break;
	}
	cout << move << endl;
}

int32_t main(){
	fast;
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}