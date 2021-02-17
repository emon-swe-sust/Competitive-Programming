#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int32_t main(){
	fast;
	string s; cin>>s;
	int a=0,b=0; for(auto x:s){
		if('A'<=x && x<='Z')a++;
		else if('a'<=x && x<='z')b++;
	}cout<<a<<' '<<b<<endl;
}