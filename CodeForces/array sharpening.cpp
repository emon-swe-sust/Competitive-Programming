#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,i=0,j=0,k,l,m;
        cin >> n;
        long long arr[n],brr[n];
        if(n%2 == 1)
        {
            for(i=0;i<n/2;i++)
                brr[i] = i;
            brr[i] = i;
            i++;
            for(i=i;i<n;i++)
                brr[i] = n-i-1;
        }
        else
        {
            for(i=0;i<n/2-1;i++)
                brr[i] = i;
            brr[i] = i+1;
            brr[i+1] = i+1;
            i = i+2;
            for(i=i;i<n;i++)
                brr[i] = n-i-1;
        }
        for(i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        for(i=0;i<n;i++)
        {
            if(n%2 == 1)
            {
                if(arr[i] < brr[i])
                {
                    cout << "NO" << endl;
                    goto here;
                }
            }
            else
            {
                if(arr[i] < brr[i])
                {
                    if(i == n/2-1)
                    {
                        if(arr[i] + 1 < brr[i] || arr[i+1] < brr[i+1])
                        {
                            cout << "NO" << endl;
                            goto here;
                        }
                    }
                    else if(i == n/2)
                    {
                        if(arr[i] + 1 < brr[i] || arr[i-1] < brr[i-1])
                        {
                            cout << "NO" << endl;
                            goto here;
                        }
                    }
                    else
                    {
                        cout << "NO" << endl;
                        goto here;
                    }
                }
            }
        }
        cout << "YES" << endl;
        here:;
    }
    return 0;
}
