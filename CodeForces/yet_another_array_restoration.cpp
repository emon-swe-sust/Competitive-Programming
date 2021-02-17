#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x,y,i,j,dif;
        cin >> n >> x >> y;
        dif = y-x;
        vector<int>vec,ans;
        for(i=1;i<=dif;i++)
        {
            if(dif%i == 0)
                vec.push_back(i);
        }
        for(i=vec.size()-1;i>=0;i--)
        {
            if((dif/vec[i]) + 1 == n)
            {
                i--;
                break;
            }
            if((dif/vec[i]) + 1 > n)
                break;
        }
        i++;
        int cur=y;
        for(j=1;j<=n;j++)
        {
            ans.push_back(cur);
            cur -= vec[i];
            if(cur < 1)
                break;    
        }
        cur = y+vec[i];
        if(j < n)
        {
            while(j != n)
            {
                ans.push_back(cur);
                cur += vec[i];
                j++;
            }
        }
        for(i=0;i<ans.size()-1;i++)
            cout << ans[i] << " ";
        cout << ans[ans.size()-1] << endl;
    }
}