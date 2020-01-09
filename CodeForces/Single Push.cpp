#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int n,i,j,k,l,strt = -1,scnd = -1,dif;
        cin >> n;
        bool wrng=false,noob=false,loop=false,first=false;
        int arr[n],brr[n];
        for(i=0; i<n; i++)
            cin >> arr[i];
        for(i=0; i<n; i++)
            cin >> brr[i];
        for(i=0; i<n; i++)
        {
            if(!loop && (arr[i] != brr[i]))
            {
                loop = true;
                while(arr[i] != brr[i])
                {
                    if(!first)
                    {
                        first = true;
                        dif = brr[i] - arr[i];
                        if(dif < 0)
                            wrng = true;
                    }
                    if((brr[i] - arr[i]) != dif)
                        wrng = true;
                    i++;
                    if(i >= n)
                        break;
                }
                i--;
            }
            else if(loop && (arr[i] != brr[i]))
                wrng = true;
        }
        if(wrng)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
