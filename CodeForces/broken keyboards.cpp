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
        string str,ans;
        bool bo = false;
        set<char>vec;
        set<char>:: iterator it;
        cin >> str;
        char last;
        int i,n,k,l,m,j;
        for(i=0;i<str.size();i++)
        {
            last = str[i];
            j = i;
            int tot=0;
            while(str[j] == last)
            {
                j++;
                tot++;
            }
            if(tot%2 == 1)
            {
                vec.insert(last);
            }
            i = j-1;
        }
        for(it = vec.begin();it!=vec.end();++it)
        {
            cout << *it ;
        }
        cout << endl;
    }
 
	return 0;
}
