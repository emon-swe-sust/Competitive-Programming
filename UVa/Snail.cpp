#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    while(true)
    {
        int i,j,k,l,m,n,day=0;
        float curr=0;
        float h,u,d,f;
        cin >> h >> u >> d >> f;
        if(h==0)
            break;
        float up = u,mn = u*(f/100);
        while(true)
        {
            curr += up;
            up = up-mn;
            if(up < 0)
                up = 0;
            day++;
            if(curr>h)
            {
                cout << "success on day " << day << endl;
                break;
            }
            curr -= d;
            if(curr < 0)
            {
                cout << "failure on day " << day << endl;
                break;
            }
        }
    }
	return 0;
}
