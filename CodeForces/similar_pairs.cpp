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
        int n,i,j,o=0;
        cin >> n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin >> arr[i];
            if(arr[i] % 2 == 1)
                o++;
        }
        if(o % 2 == 0)
        {
            cout << "YES\n";
            continue;
        }
        sort(arr,arr+n);
        for(i=1;i<n;i++)
        {
            if(arr[i] == arr[i-1]+1)
            {
                cout << "YES\n";
                break;
            }
        }
        if(i == n)
            cout << "NO\n";
    }
    return 0;
}