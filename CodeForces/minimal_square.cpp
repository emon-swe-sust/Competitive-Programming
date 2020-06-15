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
        int a,b;
        cin >> a >> b;
        if(a < b)
        {
            int temp = b;
            b = a;
            a = temp;
        }
        if(a >= b*2)
            cout << a * a << endl;
        else
        {
            if(b*2 >= a)
                cout << b*4*b << endl;
            else
            
                cout << a*4*a << endl;
        }
    }
    return 0;
}