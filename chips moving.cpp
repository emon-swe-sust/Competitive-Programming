#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long n,i,j,k,l,even = 0 , odd=0;
    cin >> n ;
    long long arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
        if(arr[i]%2 ==0)
            even++;
        else odd++;
    }
    cout << min(even,odd) << endl;
    return 0;
}
