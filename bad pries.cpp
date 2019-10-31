#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n,i,j,k,l,t;
    //cin >> t;
    scanf("%d",&t);
    while(t--)
    {
        //cin >> k;
        scanf("%d",&k);
        int arr[k];
        int minn=INT_MAX;
        int ans = 0;
        for(i=0;i<k;i++)
            scanf("%d",&arr[i]);
        for(i=k-1;i>=0;i--)
        {
            if(arr[i] < minn)
            {
                minn = arr[i];
            }
            if(arr[i] > minn)
                ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
