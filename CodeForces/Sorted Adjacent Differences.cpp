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
        long long n,i,j,bck,fnt;
        cin >> n;
        long long arr[n];
        for(i=0;i<n;i++)
            cin >> arr[i];
        sort(arr,arr+n);
        if(n%2 == 0)
        {
              bck = n/2-1;
              fnt = n/2;
              for(i=0;i<n/2-1;i++)
              {
                  cout << arr[bck] << " " << arr[fnt] << " ";
                  bck--;
                  fnt++;
              }
              cout << arr[bck] << " " << arr[fnt] << endl;
        }
        else
        {
            cout << arr[n/2] << " ";
            bck = n/2-1;
            fnt = n/2+1;
            for(i=0;i<n/2-1;i++)
            {
                cout << arr[bck] << " " << arr[fnt] << " ";
                bck--;
                fnt++;
            }
            cout << arr[bck] << " " << arr[fnt] << endl;
        }
    }
	return 0;
}
