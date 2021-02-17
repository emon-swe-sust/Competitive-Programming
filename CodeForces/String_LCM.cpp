#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int lcm(int a, int b){
	return (a / gcd(a, b)) * b;
}

int32_t main(){
	fast;
	int t;
	cin >> t;
	while(t--)
	{
		string a, b, c, cc;
		c="";
		int same=1,k;
		cin >> a >> b;

		if(a.length() < b.length()){
			cc = a;
			a = b;
			b = cc;
		}
		k = lcm(a.length(), b.length()) / a.length();
		for(int i=0;i<k;i++){
			c += a;
		}
		for(int i=0;i<c.length();i++){
			if(c[i] != b[i%b.length()]){
				cout << -1 << endl;
				k=-1;
				break;
			}
		}
		if(k != -1){
			cout << c << endl;
		}
	}
}