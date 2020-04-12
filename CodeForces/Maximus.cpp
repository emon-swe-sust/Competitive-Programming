#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long i,j,k=0,l=0;
    long long arr[n];
    for(i=0;i<n;i++)
        cin >> arr[i];
    for(i=0;i<n;i++)
    {
        k+=arr[i];
        l=max(l,k);
        cout << k << " ";
        k=l;
    }
    return 0;
}
