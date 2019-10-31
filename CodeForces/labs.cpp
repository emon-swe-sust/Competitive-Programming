#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,curr,i,j,k,l;
    cin >> n;
    bool sign = true;
    curr = n*n;
    int arr[n][n];
    for(i=0;i<n;i++)
    {
        if(sign)
        {
            for(j=0;j<n;j++)
            {
                arr[j][i] = curr;
                curr--;
            }
        }
        else
        {
            for(j=n-1;j>=0;j--)
            {
                arr[j][i] = curr;
                curr--;
            }
        }
        sign = !sign;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}
