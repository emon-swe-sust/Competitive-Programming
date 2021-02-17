#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int32_t main(){
	fast;
	int t;
	cin >> t;
	while(t--)
	{
		int n,i,j,one=0,two=0;
		cin >> n;
		for(i=0;i<n;i++){
			cin >> j;
			if(j==1)
				one++;
			else
				two++;
		}
		if(one%2 == 1)
			cout << "NO" << endl;
		else if(two%2 == 1 && one < 2)
			cout << "NO" << endl;
		else
			cout <<"YES" << endl;
	}
}