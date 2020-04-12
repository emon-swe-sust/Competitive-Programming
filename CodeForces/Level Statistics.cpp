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
	    int n,i,j,k=0,l;
	    cin >> n;
	    int arr[n],brr[n];
	    cin >> arr[0] >> brr[0];
	    if(brr[0] > arr[0])
            k=1;
	    for(i=1;i<n;i++)
        {
            cin >> arr[i] >> brr[i];
            if(arr[i] < arr[i-1] || brr[i] < brr[i-1] || brr[i] > arr[i] || ((arr[i]-arr[i-1]) < (brr[i]-brr[i-1])))
            {
                k=1;
            }
        }
        if(k == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
	}
	return 0;
}
