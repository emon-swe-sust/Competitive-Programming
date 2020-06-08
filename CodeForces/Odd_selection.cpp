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
        int i,j=0,n,x,odd=0,even=0;
        cin >> n >> x;
        int arr[n];

        for(i=0;i<n;i++)
        {
            cin >> arr[i];
            
            if(arr[i] %2 == 0)
                even++;
            else
                odd++;
        }
        
        for(i=1;i<=odd;i+=2)
        {
            if(i > x)
                break;
            if(x-i <= even)
            {
                cout << "Yes" << endl;
                j=1;
                break;
            }
        }

        if(j==0)
            cout << "No" << endl;
        
    }

    return 0;
}