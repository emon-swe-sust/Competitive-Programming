#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t,i;
	cin >> t;
	long long brr[70];
	long long x=2,y=1;
	brr[0] = (long long) 0;
	brr[1] = y;
	for(int i=2;i<65;i++)
        brr[i] = brr[i-1]*2;
	while(t--)
    {
        int n,i,j,k,ans=0;
        cin >> n;
        long long arr[n];
        cin >> arr[0];
        for(i=1;i<n;i++)
        {
            cin >> arr[i];
        }

        for(i=1;i<n;i++)
        {
            if(arr[i] < arr[i-1])
            {
                long long dif = arr[i-1] - arr[i];
                for(j=1;j<64;j++)
                {
                    //cout << i << " " << dif << " " << brr[j] << endl;
                    if(dif < brr[j])
                    {
                        ans = max(ans,j-1);
                        arr[i] = arr[i-1];
                        break;
                    }
                }
            }
        }

        cout << ans << endl;
    }

	return 0;
}
