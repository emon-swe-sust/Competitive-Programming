#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
	fast;
	int t;
	cin >> t;
	while(t--){
		long long w,h,n,i,j=0,total = 1;
		cin >> w >> h >> n;
		if(w %2 == 0){
			w/=2;
			total = 2;
		}
		while( total < n && w%2 == 0 ){
			w /= 2;
			total *= 2;
		}
		if(h%2 == 0){
			h/=2;
			total *= 2;
		}
		while( total < n && h%2 == 0){
			h /= 2;
			total *= 2;
		}
		if(total >= n)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}