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
        int n,k,i,j;
        cin >> n >> k;

        if(n%2 == 0)
        {
            if(k%2 == 0)
            {
                if(sqrt(n) >= k)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
                cout << "NO" << endl;
        }
        else
        {
            if(k%2 == 1)
            {
                if(sqrt(n) >= k)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }


	return 0;
}
