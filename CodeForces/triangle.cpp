#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int32_t main(){
	fast;
	int t; cin>>t; while(t--){
		ll a,b,c,s; cin>>a>>b>>c;
		s=(a+b+c);
		s=(s*(s-2*a)*(s-2*b)*(s-2*c));
		if(s>=0)cout<<setprecision(2)<<fixed<<sqrt(s/16.0)<<endl;
		else cout<<"Oh, No!"<<endl;
	}
}