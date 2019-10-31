#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        int i,j,k,ans = 0;
        cin >> n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin >> k;
            ans += k;
        }
        cout << (ans+n-1)/n << endl;
    }
	}
