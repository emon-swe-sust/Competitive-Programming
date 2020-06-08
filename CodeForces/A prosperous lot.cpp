#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,j;
    cin >> n;
    if(n > 18)
    {
        cout << -1 <<endl;
        return 0;
    }
    for(i=n;i>2;i=i-2)
    {
        cout << 8;
    }
    if(i == 2)
        cout << 8;
    else
        cout << 9;
        return 0;
}
