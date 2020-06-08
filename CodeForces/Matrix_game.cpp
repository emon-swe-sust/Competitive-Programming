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
        int row,col,i,j,ansr,ansc;
        cin >> row >> col;
        ansr = 0;
        ansc = 0;
        int arr[row][col],r[row],c[col];
        
        memset(r,0,sizeof(r));
        memset(c,0,sizeof(c));

        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                cin >> arr[i][j];
                if(arr[i][j] == 1)
                {
                    r[i] = 1;
                    c[j] = 1;
                }
            }
        }

        for(i=0;i<row;i++)
        {
            if(r[i] == 0)
                ansr++;
        }
        
        for(i=0;i<col;i++)
        {
            if(c[i] == 0)
                ansc++;
        }

        int ans = min(ansr,ansc);
        if(ans %2 == 0)
        {
            cout << "Vivek" << endl;
        }
        else
        {
            cout << "Ashish" << endl;
        }
    }
	return 0;
}