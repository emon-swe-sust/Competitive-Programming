#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
    {
        double n,a,d,v;
        cin >> n >> a >> d;

       // cout << fixed << setprecision(1) << (n/2.0)(2*a + (n-1)*d);
        v = (n/2.0)*(2*a + (n-1)*d);
        cout << fixed << setprecision(0) << v << endl;
    }
    return 0;
}
