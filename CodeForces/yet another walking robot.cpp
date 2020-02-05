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
        long long n,i,j,k,l,ans=99999999,ansx=-1,ansy=-1,curx,cury;
        cin >> n;
        map<pair<long long,long long>,long long> arr;
        string str;
        cin >> str;
        curx = n;
        cury = n;
        arr[{curx,cury}] = 1;
        for(i=0;i<str.size();i++)
        {
            if(str[i] == 'L')
                curx--;
            else if(str[i] == 'R')
                curx++;
            else if(str[i] == 'U')
                cury++;
            else
                cury--;
            if(arr[{curx,cury}] != 0 && ans > i+2 - arr[{curx,cury}])
            {
                    ans = i+2-arr[{curx,cury}];
                    ansx = arr[{curx,cury}];
                    ansy = i+2;
                    arr[{curx,cury}] = i+2;
            }
            else
                arr[{curx,cury}] = i+2;
        }
        if(ansx != -1 && ansy != -1)
            cout << ansx << " " << ansy-1 << endl;
        else
            cout << -1 << endl;
    }
	return 0;
}
