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
		int n,prev,i,j;
		prev = 0;
		string b;
		cin >> n >> b;
		char ans[n];
		for(i=0;i<n;i++)
		{

			int cur;
			cur = b[i]-'0';
			if(cur == 0)
			{
				if(prev == 0){
					ans[i] = '1';
					prev = 1;
				}
				else if(prev == 2){
					ans[i] = '1';
					prev = 1;
				}
				else{
					ans[i] = '0';
					prev = 0;
				}
			}
			else{
				if(prev == 0){
					ans[i] = '1';
					prev = 2;
				}
				else if(prev == 1){
					ans[i] = '1';
					prev = 2;
				}
				else{
					ans[i] = '0';
					prev = 1;
				}
			}
		}

		for(i=0;i<n;i++)
			cout << ans[i];
		cout << endl;
	}
}