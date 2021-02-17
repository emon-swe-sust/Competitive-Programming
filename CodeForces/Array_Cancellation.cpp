#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        long long i,j,n,total=0,canc=0,curr=0;
        cin >> n;
        long long arr[n];

        for(i=0;i<n;i++)
        {
            cin >> arr[i];
            total += abs(arr[i]);
            if(arr[i] > 0)
                curr += arr[i];
            else
            {
                canc += min(curr,abs(arr[i]));
                curr -= min(curr,abs(arr[i]));
            }
        }
        cout << (total - canc*2)/2 << endl;
    }
}