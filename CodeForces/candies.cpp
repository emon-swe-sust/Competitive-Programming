#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,i,j,l,r,k;
    cin >> n;
    int arr[n+1];
    arr[0] = 0;
    for(i=1;i<=n;i++)
    {
        cin >> arr[i];
        arr[i] = arr[i-1]+arr[i];
    }
    cin >> k;
    while(k--)
    {
        cin >> l >> r;
        cout << (arr[r]-arr[l-1])/10 << endl;
    }
    return 0;
}
