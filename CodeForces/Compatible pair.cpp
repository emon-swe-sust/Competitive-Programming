#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long m,n,i,j,k,l,mm[55],nn[55],aplus=0,aminus=0,bplus=0,bminus=0;
    cin >> n >> m;
    vector<long long>vec;
 
    for(i=0;i<n;i++)
        cin >> nn[i];
 
    for(i=0;i<m;i++)
        cin >> mm[i];
 
    for(i=0;i<n;i++)
    {
        long long maxx = -1000000000000000000;
        for(j=0;j<m;j++)
        {
            maxx = max(maxx,nn[i]*mm[j]);
        }
        vec.push_back(maxx);
    }
    sort(vec.begin(),vec.end());
 
    cout << vec[vec.size()-2] << endl;
 
    return 0;
}
