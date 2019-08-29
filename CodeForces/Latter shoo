#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int siz,i,j,k,l;
    string str;
    vector<int>vec[26];
 
    cin >> siz >> str >> k;
    for(i = 0;i<str.size();i++)
    {
        vec[str[i]-'a'].push_back(i+1);
    }
 
    while(k--)
    {
        string name;
        int maxx = 0;
        int cnt[26] = {0};
        cin >> name;
 
        for(i=0;i<name.size();i++)
        {
            maxx = max(maxx , vec[name[i]-'a'][cnt[name[i]-'a']]);
            cnt[name[i]-'a']++;
        }
        cout << maxx << endl;
    }
    return 0;
}
