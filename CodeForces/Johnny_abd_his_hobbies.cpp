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
        int n,i,j;
        cin >> n;
        bool is[1024];
        int arr[n];

        memset(is,false,sizeof(is));

        for(i=0;i<n;i++)
        {
            cin >> arr[i];
            is[arr[i]] = true;
        }

        for(i=1;i<=1023;i++)
        {
            for(j=0;j<n;j++)
            {
                if(!is[arr[j]^i])
                    break;
            }
            if(j == n)
            {
                cout << i << endl;
                break;
            }
        }
        if(i == 1024)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}