#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,i,j,k,l;
    cin >> n;
    vector<int>vec,vac;
    for(i=0;i<n;i++)
    {
        cin >> k ;
        vec.push_back(k);
    }
    sort(vec.begin(),vec.end());
    for(i=0;i<n;i+=2)
        vac.push_back(vec[i]);
    if(n%2==1)
        k=n-2;
    else k = n-1;
    for(i=k;i>=0;i-=2)
        vac.push_back(vec[i]);
    for( i=1;i<n-1;i++)
    {
        if(vac[i-1]+vac[i+1] <= vac[i])
        {
            cout << "NO" <<endl;
            return 0;
        }
    }
    if(vac[n-2]+vac[0] <= vac[n-1])
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    for(i=0;i<n;i++)
        cout << vac[i] << " ";
    return 0;
}
