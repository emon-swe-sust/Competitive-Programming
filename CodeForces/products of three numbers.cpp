#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long i,j,a,b,c=0,k=1,q=0;
        cin >> a;
        vector<int>vec;
        b = a;
        for(i=2;i<=sqrt(b);i++)
        {
            if(a % i == 0)
            {
                vec.push_back(i);
                a /= i;
            }
        }
        if((vec.size() == 2 && a != 1))
        {
            if(vec[0] != a && vec[1] != a)
                cout << "YES" << endl << vec[0] << " " << vec[1] << " " << a << endl;
            else
                cout << "NO" << endl;
        }
        else if(vec.size() > 2)
        {
            cout << "YES" << endl;
            for(i=0;i<2;i++)
                cout << vec[i] << " ";
            for(i=2;i<vec.size();i++)
                k *= vec[i];
            cout << k*a << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
