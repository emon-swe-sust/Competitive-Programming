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
        long long a,b,i,j,k,dig=0;
        cin >> a >> b;
        long long len=0;
        long long temp=9;
        while(temp<=b)
        {
            len++;
            temp*=10;
            temp+=9;
        }
        cout << a*len << endl;
    }

    return 0;
}
