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
        int n,a,b,c,d,i,j,x,y,p,q;
        cin >> n ;
        cin >> a >> b >> c >> d;
        x = (a-b)*n;
        y = (a+b)*n;
        p = c-d;
        q = c+d;
        if((x >= p && x <=  q) || ( p >= x && p <= y) || (y >= p && y <=q) || (q >= x &&   q <= y))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
	return 0;
}
