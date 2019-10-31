#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int row,col,i,j,k,l;
    cin >> row >> col;
    int arr[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            cin >> arr[i][j];
    }
    for(i=row-1;i>=0;i--)
    {
        for(j=col-2;j>=0;j--)
        {
            if(i < row-2)
            {
                if(arr[i][j] !=0 && arr[i][j] >= arr[i+1][j])
                {
                    // cout << i << " " << j << -1 << endl;
                     cout << -1 << endl;
                     return 0;
                }
            }
            if(arr[i][j] != 0 && arr[i][j] >= arr[i][j+1])
            {
                //cout << i << " - " << j << -1 << endl;
                //cout << arr[i][j] << " " << arr[i][j+1] << endl;
                cout << -1 << endl;
                return 0;
            }
            if(arr[i][j] == 0)
            {
                arr[i][j] = min(arr[i][j+1]-1,arr[i+1][j]-1);
                if(arr[i][j] <= arr[i-1][j] || arr[i][j] <= arr[i][j-1])
                {
                    cout << -1 << endl;
                    return 0;                }
                    //cout << "change " << i << " " << j << " " << arr[i][j] << endl;
            }
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col-1;j++)
        {
                if(arr[i][j] >= arr[i][j+1])
                {
                    cout << -1 << endl;
                    return 0;
                }
        }
    }
    for(i=0;i<row-1;i++)
    {
        for(j=0;j<col;j++)
        {
            if(arr[i][j] >= arr[i+1][j])
            {
                cout << -1 << endl;
                return 0;
            }
        }
    }
    int ans=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            ans+=arr[i][j];
    }
    cout <<  ans << endl;
    return 0;
}
