#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k,i,j,a,b,c;
	cin>>n>>m>>k;
	string ans="";
	for(i=0;i<k*2;i++)
        cin >> a >> b;
	for(i=0;i<n-1;i++)
        ans+="D";
    for(i=0;i<m-1;i++)
        ans+="R";
	//cout << ans << endl;
	for(i=0;i<m;i++)
    {
		if(i%2 == 0)
		{
		    for(j=0;j<n-1;j++)
                ans += "U";
		}
		else
        {
            for(j=0;j<n-1;j++)
                ans += "D";
        }
        if(i!=m-1)
            ans += "L";
	}
	cout<<ans.size()<<"\n"<<ans;
	return 0;
}
