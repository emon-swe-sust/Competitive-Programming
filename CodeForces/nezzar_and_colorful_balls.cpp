#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int32_t main(){
	fast;
	int n;
	cin >> n;
	while(n--)
	{
		int x,i,j,maxx=0,curr=1;
		cin >> x;
		int arr[x];
		for(i = 0; i<x ;i++)
		{
			cin >> arr[i];
			if(i !=0 )
			{
				if(arr[i] == arr[i-1])
				{
					curr++;
				}
				else
				{
					maxx = max(maxx,curr);
					curr = 1;
				}

			}
		}
		cout << max(maxx,curr) << endl;
	}
}