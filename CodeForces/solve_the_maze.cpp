#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>, int> mp;

void path(char **arr,int x,int y,int n,int m)
{
    mp[{x,y}] = 1;
    if(x-1 >=0 && !mp[{x-1,y}] && arr[x-1][y] != '#')
        path(arr,x-1,y,n,m);
    if(y-1 >=0 && !mp[{x,y-1}] && arr[x][y-1] != '#')
        path(arr,x,y-1,n,m);
    if(x+1 < n && !mp[{x+1,y}] && arr[x+1][y] != '#')
        path(arr,x+1,y,n,m);
    if(y+1 < m && !mp[{x,y+1}] && arr[x][y+1] != '#')
        path(arr,x,y+1,n,m);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        mp.clear();
        int n,m,i,j;
        cin >> n >> m;

        
            char** arr=new char*[n];
            for(int i=0;i<n;i++)
                arr[i]=new char[m];
        
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin >> arr[i][j];
            }
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(arr[i][j] == 'B')
                {
                    if(i-1 >= 0 && arr[i-1][j] == 'G')
                    {
                        cout << "No" << endl;
                        goto here;
                    }
                    if(i-1 >= 0 && arr[i-1][j] == '.')
                        arr[i-1][j] = '#';
                    
                    if(i+1 < n && arr[i+1][j] == 'G')
                    {
                        cout << "No" << endl;
                        goto here;
                    }
                    if(i+1 < n && arr[i+1][j] == '.')
                       arr[i+1][j] = '#';
                    
                    if(j-1 >= 0 && arr[i][j-1] == 'G')
                    {
                        cout << "No" << endl;
                        goto here;
                    }
                    if(j-1 >= 0 && arr[i][j-1] == '.')
                        arr[i][j-1] = '#';

                    if(j+1 < m && arr[i][j+1] == 'G')
                    {
                        cout << "No" << endl;
                        goto here;
                    }
                    if(j+1 < m && arr[i][j+1] == '.')
                        arr[i][j+1] = '#';
                }
            }
        }

        path(arr,n-1,m-1,n,m);

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(arr[i][j] == 'G')
                {
                    if(!mp[{i,j}] || arr[n-1][m-1] == '#')
                    {
                        cout << "No" << endl;
                        goto here;
                    }
                }
            }
        }

        cout << "Yes" << endl;
        here:;
    }

	return 0;
}