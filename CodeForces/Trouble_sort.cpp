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
        int n,i,j,k=0;
        cin >> n;
        int arr[n],brr[n];

        for(i=0;i<n;i++)
            cin >> arr[i];

        for(i=0;i<n;i++)
            cin >> brr[i];

        for(i=1;i<n;i++)
        {
            if(brr[i] != brr[i-1])
            {   
                k = 1;
                break;
            }
        }

        if(k == 0)
        {
            for(i=1;i<n;i++)
            {
                if(arr[i] < arr[i-1])
                {
                    cout << "No" << endl;
                    goto here;
                }
            }
            cout << "Yes" << endl;
            here:;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }

	return 0;
}