
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,i,j,k;
    cin >> n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i+j)%2==0)
                cout << "W";
            else
                cout << "B";
        }
        cout << endl;
    }
    return 0;
}
