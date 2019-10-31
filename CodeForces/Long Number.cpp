#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,i,j,k,l=0;
    string in,out="";
    map<int,int>mp;
    cin >> n >> in;
    for(i=0;i<9;i++)
    {
        cin >> k ;
        mp[i+1]=k;
    }
    for(i=1;i<=9;i++)
    {
       // cout << mp[i] << " " << i << endl;
        if(mp[i]!=i)
            l=1;
    }
    if(l==0)
    {
        cout << in << endl;
        return 0;
    }
    for(i=0;i<n;i++)
    {
        out=out+char(mp[int(in[i]-'0')]+'0');
    }
    int chk = 0;
    for(i=0;i<n;i++)
    {
        if(out[i]-'0' > in[i]-'0')
        {
            chk=1;
            break;
        }
        else if(in[i]-'0'>out[i]-'0')
        {
            cout << in[i] << " " << out[i] << endl;
            chk=2;
            break;
        }
    }
    if(chk == 0)
        cout << in << endl;
    else if(chk==1)
        cout << out << endl;
    else
        cout << in << endl;
    return 0;
}
