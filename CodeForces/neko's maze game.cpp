#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n,p,q,r,c,i,j,blockedpair=0;
	cin >> n >> q;

	int arr[3][n+1];
	memset(arr,0,sizeof(arr));

	for(i=0;i<q;i++)
    {
        int d;
        cin >> r >> c;
        if(arr[r][c] == 1)
            d = -1;
        else
            d = +1;
        arr[r][c] = 1 - arr[r][c];
        for(j=-1;j<=1;j++)
        {
            if(c+j > n || c+j < 1)
                continue;
            if(arr[3-r][c+j] == 1)
                blockedpair += d;

        }
        if(blockedpair == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }


    return 0;
}
