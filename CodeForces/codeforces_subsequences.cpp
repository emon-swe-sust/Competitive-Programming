#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long k,ans=1;
    int i;
    cin >> k;
    int times[10];
    for(i=0;i<10;i++)
        times[i]=1;

    string str = "codeforces";

    for(i=0;ans<k;i=(i+1)%10)
    {
        ans = (ans/times[i])*(times[i]+1);
        times[i]++;
    }
    for(i=0;i<10;i++)
    {
        for(int j=0;j<times[i];j++)
            cout << str[i];
    }
    cout << endl;

    return 0;
}
