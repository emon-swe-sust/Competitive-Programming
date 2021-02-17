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
		int q,d;
		cin >> q >> d;
		int arr[q];
		for(int i=0;i<q;i++)
			cin >> arr[i];
		for(int i=0;i<q;i++)
		{
			if(arr[i] >= d*10 || arr[i]%10 == d)
			{
				cout << "YES" << endl;
			}
			else
			{
				int rem = arr[i];
				int flag = 0;
				while(rem > 0)
				{
					if(rem % 10 == d)
					{
						cout << "YES"<< endl;
						flag = 1;
						break;
					}
					rem -= d;
				}
				if( flag == 0 )
				{
					cout << "NO" << endl;
				}
			}
		}
	}
}