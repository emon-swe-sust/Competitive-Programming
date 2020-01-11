#include<bits/stdc++.h>
using namespace std;

long long maxx(long long a[], long long siz,long long strt)
{
    long long max_so_far = -99999999999999999, max_ending_here = 0;

    for (long long i = strt; i < siz; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        long long yass=0,adel,i,j,k,l,m,n,strt=0;
        bool neg = false;
        cin >> n;
        long long arr[n];
        for(i=0;i<n;i++)
        {
            cin >> arr[i];
            yass += arr[i];
        }

        adel = maxx(arr,n-1,strt);
        adel = max(adel,maxx(arr,n,strt+1));

        if(yass > adel)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
    return 0;
}
