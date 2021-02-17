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
        string str,abc;
        cin >> str;

        int i,j,siz;
        cin >> siz;

        int arr[siz];
        for(i=0;i<siz;i++)
            cin >> arr[i];
        vector<vector<int> > position;
        while(true)
        {
            vector<int>pos;
            for(i=0;i<siz;i++)
            {
                if(arr[i] == 0)
                    pos.push_back(i);
            }
            if(pos.size() == 0)
                break;
            position.push_back(pos);
            for(i=0;i<siz;i++)
            {
                if(arr[i] == 0)
                    arr[i] = INT_MAX;
                else
                {
                    for(j=0;j<pos.size();j++)
                    {
                        arr[i] -= abs(pos[j]-i);
                    }
                }
            }
        }

        int ch[26];
        for(i=0;i<26;i++)
            ch[i]=0;
        for(i=0;i<str.size();i++)
            ch[(int)(str[i]-'a')]++;

        char ans[siz];
        j = 25;

        for(i=0;i<position.size();i++)
        {
            int curr = position[i].size();
            for(j=j;j>=0;j--)
            {
                if(ch[j] >= curr)
                {
                    for(int k=0;k<curr;k++)
                    {
                        ans[position[i][k]] = (char)('a'+j);
                    }
                    j--;
                    break;
                }
            }
        }
        for(i=0;i<siz;i++)
            cout << ans[i];
        cout << endl;
    }
	return 0;
}