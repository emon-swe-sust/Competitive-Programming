#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define x first
#define y second
void solve()
{
	int n,k; cin>>n; k=2*n;
	vector<ll> vec;
	map<ll,int> mp;
	for(int i=0;i<k;i++){
		ll a;
		cin>>a;
		mp[a]++;
	}
	for(auto x:mp){
		if((x.y&1) || (x.x&1) || (x.y>2))return void(cout<<"NO"<<endl);
		else vec.push_back(x.x);
	} sort(vec.rbegin(), vec.rend());
	ll minus = 0;
	for(int i=0;i<vec.size();i++) {
		if((vec[i]-minus) <= 0 ||  (vec[i]-minus) % ((n-i)*2)) return void(cout << "NO" << endl);
		minus += (vec[i]-minus)/(n-i);
	} cout << "YES" << endl;
	return;
}

int32_t main(){
	fast;
	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
}