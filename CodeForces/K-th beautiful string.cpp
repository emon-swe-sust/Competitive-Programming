#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	long long arr[100005];
	arr[0]=0;
	for(long long i=1;arr[i-1]<=2000000000;i++)
        arr[i] = arr[i-1]+i;
	while(t--)
    {
        long long i,a,b,j,m,n;
        cin >> a >> b;
        b--;
        for(i=0;i<63247;i++)
        {
            if(arr[i] > b)
            {
                m = i;
                n = b - arr[i-1];
                break;
            }
        }
        for(i=0;i<a;i++)
        {
            if(i == a-m-1 || i == a-n-1)
                cout << "b";
            else
                cout << "a";
        }
        cout << endl;
    }
	return 0;
}
