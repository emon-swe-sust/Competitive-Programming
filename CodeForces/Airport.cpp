#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,maxx=0,minn=0,temp;
    priority_queue<int>top;
    priority_queue<int, vector<int>, greater<int> >down;
    cin >> n >> m;
    for(i=0;i<m;i++)
    {
        cin >> j;
        top.push(j);
        down.push(j);
    }
    for(i=0;i<n;i++)
    {
        maxx=maxx+top.top();
        temp=top.top()-1;
        top.pop();
        if(temp!=0)
            top.push(temp);
        minn=minn+down.top();
        temp=down.top()-1;
        down.pop();
        if(temp!=0)
            down.push(temp);
    }
    cout << maxx << " " << minn;
    return 0;
}
