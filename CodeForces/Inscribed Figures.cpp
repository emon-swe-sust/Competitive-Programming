#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,i,j,k,ans=0;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(i=1;i<n;i++)
    {
        if((arr[i-1] == 2 && arr[i] == 3) || (arr[i-1] == 3 && arr[i] == 2))
        {
            cout << "Infinite" << endl;
            return 0;
        }
        if((arr[i-1]==1 && arr[i]==2) ||(arr[i-1]==2 && arr[i]==1))
            ans = ans+3;
        if((arr[i-1]==1 && arr[i] == 3) || (arr[i-1]==3 && arr[i] == 1))
            ans = ans+4;
    }
    for(i=0;i<n-2;i++)
    {
        if(arr[i] == 3 && arr[i+1] == 1 && arr[i+2] == 2)
            ans--;
    }
    cout << "Finite" << endl;
    cout << ans << endl;
    return 0;
}
