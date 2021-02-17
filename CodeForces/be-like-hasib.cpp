#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int32_t main(){
	fast;
	ll n,x; cin>>n>>x;
	ll l=1,r=n,c=0;
	while(l<r){
		ll m=l+r>>1;
		c++;
		if(m<x)l=m+1;
		else r=m;
	}cout<<c<<endl;	
}