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
        int n,i,j,k,l,even=0,odd=0,vejal=0;
        cin >> n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin >> arr[i];
            if(arr[i]%2 == 0)
                even++;
            else
                odd++;
            if(i%2 != arr[i]%2)
                vejal++;
        }
        if(n%2 == 0)
        {
            if(even == odd)
            {
                cout << vejal / 2 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            if(even == odd+1)
            {
                cout << vejal / 2 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
	return 0;
}