#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    stack<char>qu;
    int n,i,j,k,l;
    char ch;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> ch;
        if(qu.size() == 0)
            qu.push(ch);
        else if(qu.top() == '(')
        {
            if(ch == ')')
                qu.pop();
            else
            {
                //cout << qu.top() << " ";
                qu.push(ch);
                //cout << qu.top() << endl;
            }
        }
        else
        {
            //cout << i << " " << ch << endl;
            //cout << qu.top() << " ";
            qu.push(ch);
            //cout << qu.top() << endl;
        }
    }
    if(n%2 == 1)
    {
        cout << "NO" << endl;
        return 0;
    }
    if(qu.size() == 0)
        cout << "YES" << endl;
    else if(qu.size() > 2)
        cout << "NO" << endl;
    else
    {
        int left = 0,right = 0;
        if(qu.top() == ')')
            right++;
        else
            left++;
        qu.pop();
        if(qu.top() == ')')
            right++;
        else
            left++;
        if(left == right)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
