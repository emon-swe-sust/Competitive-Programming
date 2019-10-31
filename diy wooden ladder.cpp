#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long test,i,j,ans,k;
    cin >> test;
    while(test--)
    {
        cin >> k;
        long long arr[k];
        for(i=0;i<k;i++)
            cin >> arr[i];
        sort(arr,arr+k);
        ans = arr[k-2];
        //cout << ans-1 << " " << k-2 << endl;
        ans = min(ans-1,k-2);
        cout << ans << endl;
    }
    return 0;
}
