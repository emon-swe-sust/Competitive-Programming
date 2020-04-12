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
        long long a,b,c,d,x,y,x0,x1,y0,y1,i,j,k,l,fx,fy;
        cin >> a >> b >> c >> d;
        cin >> x >> y >> x0 >> y0 >> x1 >> y1;

        if((y1 == y0 && x1 == x0) || ((y1 == y0) && ((c > 0) || (d > 0))) || ((x1 == x0) && ((a > 0) || (b > 0))))
        {
            cout << "NO" << endl;
            continue;
        }

        fx = x - a + b;
        fy = y - c + d;
        if(fx >= x0 && fx <= x1 && fy >= y0 && fy <= y1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
	return 0;
}
