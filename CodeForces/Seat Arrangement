#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int col,row,cols,rows,i,j,k,l,comb = 0,dot=0;
    cin >> row >> col >> k;
    char arr[row][col];
    for(i=0;i<row;i++)
    {
        int cnt=0;
        for(j=0;j<col;j++)
        {
            cin >> arr[i][j];
            if(arr[i][j] == '*')
            {
                if(cnt >= k)
                {
                    comb = comb + (cnt-k+1);
                }
                cnt=0;
            }
            else
            {
                cnt++;
                dot++;
            }
        }
        if(cnt >= k)
        {
            comb = comb + (cnt-k+1);
        }
    }
    for(i=0;i<col;i++)
    {
        int cnt = 0;
        for(j=0;j<row;j++)
        {
            if(arr[j][i] == '*')
            {
                if(cnt >= k)
                {
                    comb = comb + (cnt-k+1);
                }
                cnt = 0;
            }
            else cnt++;
        }
        if(cnt >= k)
        {
            comb = comb + (cnt-k+1);
        }
    }
    if(k == 1)
    {
        cout << dot << endl;
        return 0;
    }
    cout << comb << endl;
    return 0;
}
