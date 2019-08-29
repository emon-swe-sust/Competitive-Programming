#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long sum,ans,i,j,k;
    cin >> ans;
    while(1)
    {
         sum = 0;
         k = ans;
         while(k > 9)
        {
            sum = sum+(k%10);
            k = k/10;
        }
        sum = sum+k;
        if(sum%4 == 0)
        {
            cout << ans;
            break;
        }
        else ans++;
    }
    return 0;
}
