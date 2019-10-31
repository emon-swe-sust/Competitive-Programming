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
        long long str,intt,exp,bal;
        cin >> str >> intt >> exp;
        if(str-intt > exp)
        {
            bal = exp+1;
            cout << bal << endl;
        }
        else if((str-intt+exp+1)/2 < 0)
        {
            bal = 0;
            cout << bal << endl;
        }
        else
        {
            bal = str-intt+exp;
            cout << (bal+1)/2 << endl;
        }
    }
 
    return 0;
}
