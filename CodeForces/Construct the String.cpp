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
        int n,a,b,i,j;
        cin >> n >> a >> b;
        for(i=0;i<n-n%a;)
        {
            for(j=0;j<a;j++)
            {
                char x = 'a' + j%b;
                cout << x;
            }
            i = i+j;
        }
        for(i=0;i<n%a;i++)
        {
            char x = 'a' + i%b;
            cout << x;
        }
        cout << endl;
    }

	return 0;
}
