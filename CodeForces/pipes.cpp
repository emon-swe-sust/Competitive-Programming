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
        int n,i,j,prev=0;
        bool yes=false;
        string str1,str2;
        cin >> n >> str1 >> str2;
        for(i=0;i<n;i++)
        {
            if(!yes)
            {
                if(prev == 2)
                {
                    if(str1[i] == '1' || str1[i] == '2')
                    {
                        cout << "1NO" << endl;
                        goto here;
                    }
                    prev=0;
                    continue;
                }
                else if(!(str1[i] == '1' || str1[i] == '2'))
                {
                    yes = true;
                    prev=1;
                    if(str2[i] == '1' || str2[i] == '2')
                    {
                        cout << "NO" << endl;
                        goto here;
                    }
                    i--;
                    continue;
                }
            }
            else
            {
                if(prev == 1)
                {
                    if(str2[i] == '1' || str2[i] == '2')
                    {
                        cout << "NO" << endl;
                        goto here;
                    }
                    prev=0;
                    continue;
                }
                else if(!(str2[i] == '1' || str2[i] == '2'))
                {
                    yes = false;
                    prev=2;
                    if(str1[i] == '1' || str1[i] == '2')
                    {
                        cout << "NO" << endl;
                        goto here;
                    }
                    i--;
                    continue;
                }
            }
        }
        if(yes)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        here:;
    }
	return 0;
}
