#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        long long a,b,n,i=0;
        cin >> a >> b >> n;
        long long prev = min(a,b);
        long long curr = max(a,b);
        while(true) 
        {
            if(curr > n)
                break;
            i++;
            long long temp = prev;
            prev = curr;
            curr += temp;
        }
        cout << i << endl;
    }

    return 0;
}