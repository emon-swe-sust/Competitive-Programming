#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int32_t main(){
	fast;
	ll a,b,c,d;
	ll p,q,r,s;
	cin>>a>>b>>c>>d>>p>>q>>r>>s;
	cout<<a*p+b*r<<' '<<a*q+b*s<<'\n'<<c*p+d*r<<' '<<c*q+d*s<<endl;
}