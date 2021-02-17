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
        int t,n,i;
        cin >> t;
        int arr[t];
        for(i=0;i<t;i++)
            cin >> arr[i];
        sort(arr,arr+t);
        if(t == 1)
            cout << "YES" << endl;
        else
        {
            for(i=1;i<t;i++)
            {
                if(abs(arr[i]-arr[i-1]) > 1)
                    break;
            }
            if(i==t)
                cout << "YES" << endl;
            else 
                cout << "NO" << endl;
        }
    }
}