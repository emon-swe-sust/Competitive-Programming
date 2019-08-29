#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m,i,j,k,t,l,r;
    cin >> n >> m;
    int arr[n+5] = {0},ans[n+5]={0},q=10000,brr[n+5]={0};
    vector<int> srt1;
    vector<int>srt2;
    vector<int>usrt1;
    vector<int>usrt2;
 
    while(m--)
    {
        cin >> t >> l >> r;
        if(t == 1)
        {
            srt1.push_back(l);
            srt2.push_back(r);
        }
        else
        {
            usrt1.push_back(l);
            usrt2.push_back(r);
        }
    }
 
    for(i=0;i<srt1.size();i++)
    {
        l = srt1[i];
        r = srt2[i];
 
        for(j=l+1;j<=r;j++)
        {
            arr[j] = 1;
        }
    }
 
    for(i=0;i<usrt1.size();i++)
    {
        l = usrt1[i];
        r = usrt2[i];
 
        for(j=l+1;j<=r;j++)
        {
            if(arr[j] != 1)
            {
                arr[j] = -1;
                break;
            }
        }
        if(j == r+1)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    arr[1] = 10000;
    for(i=1;i<=n;i++)
    {
        arr[i+1] = arr[i] + arr[i+1];
    }
    for(i=1;i<=n;i++)
        cout << arr[i] << " ";
    return 0;
}
