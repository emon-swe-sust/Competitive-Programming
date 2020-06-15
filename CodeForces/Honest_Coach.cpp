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
        int n,i,j,k;
        cin >> n;
        int arr[n];
        for(i=0;i<n;i++)
            cin >> arr[i];
        sort(arr,arr+n);
        int dif = 100000;
        for(i=1;i<n;i++)
        {
            if(arr[i]-arr[i-1] < dif)
                dif = arr[i]-arr[i-1];
        }
        cout << dif << endl;
    }

    return 0;
}