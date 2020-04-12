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
        long long meye,i,j,k,l,ansm;
        cin >> meye;
        long long jamai[meye+1];
        memset(jamai,0,sizeof(jamai));
        map<long long, vector<long long> >mp;
        for(i=1;i<=meye;i++)
        {
            cin >> k;
            bool first = true;
            for(j=0;j<k;j++)
            {
                cin >> l;
                mp[j].push_back(l);
                if(jamai[l] != 1 && first)
                {
                    jamai[l] = 1;
                    first = false;
                }
            }
            if(first)
            ansm = i;

        }
        for(i=1;i<=meye;i++)
        {
            if(jamai[i] == 0)
                break;
        }
        if(i > meye)
            cout << "OPTIMAL" << endl;
        else
        {
            cout << "IMPROVE" << endl;
            cout << ansm << " " << i << endl;
        }
    }

	return 0;
}
