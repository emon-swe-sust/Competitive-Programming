#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
    int n;
    cin >> n;
    while(n--)
    {
        int a,b,c,i,j,k,l,ans=0;
        cin >> a >> b >> c;
        //k = max(min(a,b/2)*3,min(b,c/2)*3);
        l = min(c/2,b);
        ans += l*3;
        ans+=min((b-l)/2,a)*3;
        //ans = max(ans,k);
        cout << ans << endl;
    }
 
	return 0;
}
