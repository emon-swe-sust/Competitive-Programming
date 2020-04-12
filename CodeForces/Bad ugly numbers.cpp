#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int i,j,k;
        cin >> k;
        if(k == 1)
            cout << -1 << endl;
        else
        {
            cout << 2;
            for(i=1;i<k;i++)
                cout << 3;
            cout << endl;
        }
    }
    return 0;
}
