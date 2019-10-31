#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long t;
    cin >> t;
    while(t--)
    {
        long long n,head,dec,ins,i,j,k=0,l,dif=-99999999999999,maxx=0;
        cin >> n >> head;
        for(i=0;i<n;i++)
        {
            cin >> dec >> ins;
            maxx = max(maxx,dec);
            dif = max(dif,dec-ins);
        }
        if(head <= maxx)
            cout << 1 << endl;
        else if(dif <= 0 && maxx < head)
            cout << -1 << endl;
        else
        {
            head = head - maxx;
            if(head%dif == 0)
                k = head/dif+ 1;
            else
                 k = head/dif+ 2;
            cout << k << endl;
        }
    }
    return 0;
}
