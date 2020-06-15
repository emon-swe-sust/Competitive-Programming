#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    while(n--)
    {
        int a,b,i;
        cin >> a >> b;
        if(a < b)
        {
            int temp = b;
            b = a;
            a = temp;
        }
        if(a >= b*2)
            cout << b << endl;
        else
            cout << (a+b)/3 << endl;
        
        
    }

    return 0;
}