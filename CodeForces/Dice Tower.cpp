#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long q;
    cin >> q;
    while(q--)
    {
        long long i,j,k;
        cin >> k;
        j = k%14;
        if(j <= 6 && j != 0 && k > 14)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
        return 0;
}
