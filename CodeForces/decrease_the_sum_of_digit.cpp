#include<bits/stdc++.h>
using namespace std;

long long add(long long x)
{
    long long i=1,j;
    for(j=0;j<x;j++)
        i *= 10;
    return i;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        long long i,j,k,l,s,p;
        string str;
        long long ans=0;

        cin >> str >> p;
        k = str.size();
        long long cnt[k];
        for(i=0;i<k;i++)
            cnt[i] = str[i]-'0';

        for(i=k-1;i>0;i--)
        {
            long long temp=0;
            for(j=0;j<k;j++)
                temp += cnt[j];
            if(temp <= p)
            {
                break;
            }
            l = (long long)10-(long long)(str[i]-'0');
            cnt[i] = 0;
            s = add(k-1-i);
            ans += l*s;
            if(i != 1)
            {
                while(str[i-1] == '9')
                {
                    cnt[i-1] = 0;
                    i--;
                    if(i == 1)
                        break;
                }
            }
            str[i-1] =  static_cast<char>(str[i-1] + 1);
            cnt[i-1] += 1;
        }
        long long temp=0;
        for(j=0;j<k;j++)
            temp += cnt[j];
        if(temp <= p)
        {
            cout << ans << endl;
        }
        else
        {
            l=10-(long long)(str[0]-'0');
            s = add(k-1);
            ans += l*s;
            cout << ans << endl;
        }
    }

    return 0;
}
