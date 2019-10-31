#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long ans=0,i,j,k;
    string n;
    cin >> n;
    for(i=1;i<n.size();i++)
        ans+=9-int(n[i]-'0');
    ans+=10;
    if(n.size()==1)
        ans=9;
    cout << ans;
    return 0;
}
