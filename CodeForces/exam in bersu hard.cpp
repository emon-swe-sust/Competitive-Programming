#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n,m,i,j,k,l,cnt[104]={0},sum=0;
    cin >> n >> m;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(i=0;i<n;i++)
    {
        int diff = sum+arr[i]-m;
        k = 0;
        if(diff > 0)
        {
            for(j=100;j>=1;j--)
            {
                l = j*cnt[j];
                if(l >= diff)
                {
                    //k = k + (diff+j-1)/j;
                    if((diff%j) == 0)
                        k = k + diff/j;
                    else k = k + diff/j + 1;
                    break;
                }
                diff = diff - l;
                k = k + cnt[j];
            }
        }
        cnt[arr[i]]++;
        sum = sum + arr[i];
        cout << k << " ";
    }
    return 0;
