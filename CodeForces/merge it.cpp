#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long que,i,j,k,l;
    cin >> que ;
    while(que--)
    {
        cin >> k;
        int ans = 0,ans1=0,ans2=0;
        long long arr[k];
        for(i=0;i<k;i++)
        {
            cin >> arr[i];
            if(arr[i]%3 == 0 && arr[i] != 0)
                ans++;
            else if(arr[i]%3 == 1)
                ans1++;
            else if(arr[i]%3 == 2)
                ans2++;
        }
        long long p = min(ans1,ans2);
//
//        cout << ans << " - " << ans1 << " - " << ans2 <<  " - " << p << endl;
        ans = ans + p;
        ans = ans + (ans2-p)/3 + (ans1-p)/3;
        cout << ans << endl;
    }
    return 0;
}
