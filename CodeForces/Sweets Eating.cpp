#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n,m,i,j,k,l;
    cin >> n >> m;
    long long arr[n];
 
    for(i=0;i<n;i++)
        cin >> arr[i];
 
    sort(arr,arr+n);
 
    for(i=1;i<n;i++)
            arr[i] += arr[i-1];
    if(n==m)
    {
        for(i=0;i<n;i++)
            cout << arr[i] << " ";
        return 0;
    }
 
    for(i=m;i<n;i++)
        arr[i] += arr[i-m];
 
    for(i=0;i<n;i++)
        cout << arr[i] << " ";
 
    return 0;
}
