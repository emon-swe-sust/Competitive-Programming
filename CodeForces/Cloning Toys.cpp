#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long vua,vala,vuax,valax,i,j,k,l;
    cin >> vua >> vala;
 
    valax = vala;
    vuax=vala-1;
 
    if(vala == 1 && vua > 0)
    {
        cout << "NO" << endl;
        return 0;
    }
 
    if((vuax > vua) || (vua-vuax)%2 == 1 || vala == 0)
    {
        cout << "NO" << endl;
        return 0;
    }
    else
        cout << "YES" << endl;
 
    return 0;
}
