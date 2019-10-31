#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,i;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
        cin >> arr[i];
    for(i=0;i<n;i++)
    {
        if(n%2==0)
        {
            if(arr[i] <= n/2)
                cout << arr[i]+n/2 << " ";
            else
                cout << arr[i]-n/2 << " ";
        }
        else
        {
            if(arr[i] == (n+1)/2)
                cout << arr[i] << " ";
            else
                cout << n+1-arr[i] << " ";
        }
    }
    return 0;
}
