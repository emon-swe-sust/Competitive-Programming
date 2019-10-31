#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t=0,n,i,j,k,cur=19;
    cin >> n;
    while(1)
    {
        int sum=0;
        for(i=cur;i>0;i/=10)
        {
            sum = sum + i%10;
        }
        if(sum == 10)
            t++;
        if(t == n)
        {
 
            cout << cur;
            return 0;
        }
        cur++;
    }
    return 0;
}
