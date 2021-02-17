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
        int n,i,j,curr=1,ans=0;
        cin >> n;
        string str;
        cin >> str;
        
        priority_queue<int> zero,one;
        int Zero[200004],One[200004];
        memset(Zero,0,sizeof(Zero));
        memset(One,0,sizeof(One));
        vector<int>vec;
        curr = 1;
 
        if(str[0] == '0')
            zero.push(1);
        else
            one.push(1);
        
        for(i=1;i<str.size();i++)
        {
            ans = max(ans,curr);
            vec.push_back(curr);
            if(str[i] == '1')
            {
                if(!zero.empty())
                {
                    curr = zero.top();
                    one.push(curr);
                    One[curr]=1;
                    Zero[curr]=0;
                    zero.pop();
                }
                else
                {
                    curr++;
                    while(One[curr]==1) 
                    {
                        curr++;
                    }
                    One[curr] = 1;
                    one.push(curr);
                }
            }
            else if(str[i] == '0')
            {
                if(!one.empty())
                {
                    curr = one.top();
                    zero.push(curr);
                    Zero[curr]=1;
                    One[curr]=0;
                    one.pop();
                }
                else
                {
                    curr++;
                    while(Zero[curr]==1)
                    {
                        curr++;
                    }
                    Zero[curr] = 1;
                    zero.push(curr);
                }
            }
        }
        vec.push_back(curr);
        ans = max(ans,curr);
        cout << ans << endl;
        for(i=0;i<vec.size();i++)
            cout << vec[i] << " ";
        cout << endl;
    }
}