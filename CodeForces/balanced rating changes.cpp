#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    //cout << -5%2 << endl;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	int n,i,j,l;
	float k=0;
	cin >> n;
	while(n--)
    {
        cin >> j;
        if(j%2!=0)
        {
            if(k>=0)
            {
                if(j>=0)
                {
                    cout << j/2 << endl;
                    k -= 0.5;
                }
                else
                {
                    cout << j/2-1 << endl;
                    k -= 0.5;
                }
            }
            else
            {
                if(j>=0)
                {
                    cout << j/2+1 << endl;
                    k += 0.5;
                }
                else
                {
                    cout << j/2 << endl;
                    k += 0.5;
                }
            }
        }
        else
            cout << j/2 << endl;
    }
 
	return 0;
}
