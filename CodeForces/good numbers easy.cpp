#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        unsigned long long n,k,l,m=-1,o;
        int i,j;
 
        vector<unsigned long long>vec;
        cin >> n;
        o=n;
        while(n>0)
        {
            //cout << "BAL" << endl;
            l = n%3;
            vec.push_back(l);
            n = n/3;
        }
        vec.push_back(0);
        reverse(vec.begin(),vec.end());
        for(i=0;i<vec.size();i++)
        {
            if(vec[i] == 2)
            {
                m = i;
                break;
            }
        }
 
        if(m == -1)
        {
            cout << o << endl;
            continue;
        }
        for(i=m;i>=0;i--)
        {
            if(vec[i] == 0)
            {
                vec[i] = 1;
                m = i;
                break;
            }
        }
        if(m == 0)
        {
            for(i=1;i<vec.size();i++)
                vec[i] = 0;
        }
        for(i=m+1;i<vec.size();i++)
            vec[i] = 0;
        unsigned long long ans=0,temp;
        j=-1;
        for(i=vec.size()-1;i>=0;i--)
        {
            j++;
            if(vec[i] == 0)
                continue;
            temp = 1;
            for(k=0;k<j;k++)
            {
                temp*=3;
            }
            ans+=temp;
        }
        cout << ans << endl;
    }
    return 0;
}
