#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long que,n,i,j,k;
    cin >> que;
    while(que--)
    {
        cin >> k;
        vector<int>arr;
        for(i=0;i<k+5;i++)
            arr.push_back(0);
        for(i=0;i<k;i++)
        {
            cin >> j;
            ++arr[j];
        }
        long long ans,prev;
        sort(arr.rbegin(),arr.rend());
        ans = arr[0];
        prev = ans;
        for(i=1;i<k;i++)
        {
            if(prev == 0)
                break;
            if(arr[i] >= prev)
            {
                ans = ans + prev-1;
                prev--;
            }
            else
            {
                ans = ans + arr[i];
                prev = arr[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
