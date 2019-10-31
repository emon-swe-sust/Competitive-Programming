#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n,i,j,k,l;
    cin >> n;
    long long a[n];
 
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        a[i] = a[i]+1000000001;
    }
    cout << a[1]-a[0] << " " << a[n-1] - a[0] << endl;
    for(i=1;i<n-1;i++)
    {
        cout << min(a[i]-a[i-1],a[i+1]-a[i]) << " " << max(a[i]-a[0],a[n-1]-a[i]) << endl;
    }
    if(n>1)
        cout << a[n-1]-a[n-2] << " " << a[n-1]-a[0] << endl;
    return 0;
}
