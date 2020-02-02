#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int i,j,n;
        long long x,k=0,l,zero=0,one=0,inc,high=-999999999999999,low=999999999999999,ans = 0;
        string str;
        cin >> n >> x;
        cin >> str;
        if(x == 0)
            ans = 1;
        map<long long,long long>mp;
        vector<long long>vec;
        long long arr[n];
        if(str[0]=='0')
            arr[0]=1;
        else
            arr[0]=-1;
        high = max(high,arr[0]);
        low = min(low,arr[0]);
        if(mp[arr[0]] == 0)
                vec.push_back(arr[0]);
            mp[arr[0]]++;
        for(i=1;i<n;i++)
        {
            if(str[i] == '0')
            {
                arr[i] = arr[i-1]+1;
                high = max(high,arr[i]);
            }
            else
            {
                arr[i] = arr[i-1]-1;
                low = min(low,arr[i]);
            }
            if(mp[arr[i]] == 0)
                vec.push_back(arr[i]);
            mp[arr[i]]++;
        }
        inc = arr[n-1];
        if(arr[n-1] == 0 && (x > high || x < low))
        {
            cout << 0 << endl;
            continue;
        }
        else if(arr[n-1] == 0 && x <= high && x >= low)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            for(int y=0;y<vec.size();y++)
            {
                if(vec[y] > x && inc > -1)
                    continue;
                else if(vec[y] < x && inc < 1)
                    continue;
                else
                {
                    if((x-vec[y])%inc==0)
                        ans += mp[vec[y]];
                }
            }
        cout << ans << endl;
        }
    }
    return 0;
}
