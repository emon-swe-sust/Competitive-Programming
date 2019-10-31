#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	int q;
	cin >> q;
	while(q--)
    {
        int n,i,j,k=0,l,m=0,maxx=0;
        cin >> n;
        int arr[n];
        for(i=0;i<n;i++)
            cin >> arr[i];
        sort(arr,arr+n);
        for(i=1;i<n;i++)
        {
            if(arr[i]==arr[i-1]+1)
                m=1;
            if(arr[i]==arr[i-1])
            {
               k++;
               if(k>maxx)
                maxx = k;
            }
            else
            {
                k=0;
            }
        }
        cout << max(maxx,m+1) << endl;
 
    }
 
	return 0;
}
