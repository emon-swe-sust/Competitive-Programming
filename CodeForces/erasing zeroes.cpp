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
        string str;
        int i,j,k=0,l,m,n,last=0,first=-1;
        cin >> str;
        for(i=0;i<str.size();i++)
        {
            if(str[i] == '1' && first == -1)
                first = i;
            if(str[i] == '1')
                last = i;
        }
        if(first == -1)
            first = 0;
        for(i=first;i<last;i++)
        {
            if(str[i] == '0')
                k++;
        }
        cout << k << endl;
    }

	return 0;
}
