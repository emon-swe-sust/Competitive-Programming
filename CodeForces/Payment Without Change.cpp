#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
    long long q;
    cin >> q;
    while(q--)
    {
        long long a,b,n,s,i,j,k,l,rem;
        cin >> a >> b >> n >> s;
        if(min(s-s%n,a*n)+b >= s)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
 
	return 0;
}
