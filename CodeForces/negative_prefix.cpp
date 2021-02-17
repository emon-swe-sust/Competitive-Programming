#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int a,b,c,i,j,n,sum=0;
        cin >> n;
        int arr[n],pos[n];
        vector<int>vec,minus;
        for(i=0;i<n;i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        for(i=0;i<n;i++)
            cin >> pos[i];
        for(i=0;i<n;i++)
        {
            if(pos[i] == 0 && arr[i]<0)
            {
                minus
            }
        }
    }

    return 0;
}