#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	int t;
	cin >> t;
	while(t--)
    {
        int n,x,a,b,i,j,k,l;
        cin >> n >> x >> a >> b;
        cout << min(n-1,abs(b-a)+x) << endl;
    }
 
    return 0;
}
