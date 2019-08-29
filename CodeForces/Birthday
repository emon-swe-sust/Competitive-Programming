#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n,i,j,k;
    cin >> n;
    long long a[n+5],b[n+5]={0};
    for(i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);
    j=0;
    for(i=0;i<(n-n%2)/2;i++)
    {
        b[i]=a[j];
        b[n-i-1]=a[j+1];
        j+=2;
    }
    if(n%2 == 1)
        b[n/2] = a[n-1];
    for(i=0;i<n;i++)
        cout << b[i] << " ";
 
    return 0;
}
