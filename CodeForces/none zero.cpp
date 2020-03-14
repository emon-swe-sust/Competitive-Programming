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
        int q,i,j,k,l,m,op=0,ans=0,n;
        cin >> n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin >> arr[i];
            if(arr[i] == 0)
            {
                op++;
                arr[i] = 1;
            }
            ans += arr[i];
        }
        if(ans == 0)
        {
            op += 1;
        }
        cout << op << endl;
    }
	return 0;
}
