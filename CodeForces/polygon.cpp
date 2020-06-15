#include<bits/stdc++.h>
using namespace std;

void dfs(int n,int **arr, int **visit,int i,int j)
{
    visit[i][j] = 1;
    if(i > 0)
    {  
        if(arr[i-1][j] == 1 && visit[i-1][j] == 0)
        {
            dfs(n,arr,visit,i-1,j);
        }
    }
    if(j > 0)
    {
        if(arr[i][j-1] == 1 && visit[i][j-1] == 0)
        {
            dfs(n,arr,visit,i,j-1);
        }
    }
}

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
        int **arr,**visit;
        string st[n];

        arr = new int *[n];
        for(i=0;i<n;i++)
            arr[i] = new int [n];
        visit = new int *[n];
        for(i=0;i<n;i++)
            visit[i] = new int [n];

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                visit[i][j] = 0;
        }

        for(i=0;i<n;i++)
           cin >> st[i];
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(st[i][j] == '0')
                    arr[i][j] = 0;
                else
                    arr[i][j] = 1;
            }
        }
        for(j=0;j<n;j++)
        {
            if(arr[n-1][j] == 1){
                dfs(n,arr,visit,n-1,j);
            }
        }
        for(i=0;i<n;i++)
        {
            if(arr[i][n-1] == 1){
                dfs(n,arr,visit,i,n-1);
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(arr[i][j] == 1 && visit[i][j] == 0)
                {
                    cout << "NO" << endl;
                    goto here;
                }
            }
        }
        cout << "YES" << endl;
        here:;
    }
    return 0;
}