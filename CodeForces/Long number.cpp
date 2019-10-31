#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,i,j,k,l=0;
    char from,to;
    string in;
    bool bo = false;
    int mp[11];
    cin >> n >> in;
    for(i=0;i<9;i++)
    {
        cin >> k ;
        mp[i+1]=k;
    }
    for(i=0;i<n;i++)
    {
        if((int(in[i]-'0') < mp[int(in[i]-'0')]))
        {
            bo=true;
        }
        if(bo)
        {
            if(int(in[i]-'0') <= mp[int(in[i]-'0')])
                in[i]=char(mp[int(in[i]-'0')]+'0');
            else
                break;
        }
    }
    cout << in << endl;
    return 0;
}
