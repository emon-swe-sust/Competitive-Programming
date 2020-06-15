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
        unsigned long long a,b,i,j;
        cin >> a >> b;

        if(b == a)
            cout << 0 << endl;
        else if(b > a)
        {
            long long cnt = 0;
            while(1)
            {
                a *= 2;
                cnt++;
                if(b == a)
                {
                    if(cnt%3 != 0)
                        cnt = cnt/3+1;
                    else
                        cnt = cnt/3;
                        
                    cout << cnt << endl;
                    break;
                }
                else if(a > b)
                {
                    cout << -1 << endl;
                    break;
                }
            }
        }
        else
        {
            long long cnt = 0;
            while(1)
            {
                if(a == b)
                {
                    if(cnt%3 != 0)
                        cnt = cnt/3+1;
                    else
                        cnt = cnt/3;
                    
                    cout << cnt << endl;
                    break;
                }
                else if(a%2 == 0)
                {
                    a /= 2;
                    cnt++;
                    if(a == b)
                    {
                        if(cnt%3 != 0)
                            cnt = cnt/3+1;
                        else
                            cnt = cnt/3;
                        
                        cout << cnt << endl;
                        break;
                    }
                    else if(a < b)
                    {
                        cout << -1 << endl;
                        break;
                    }
                }
                else
                {
                    cout << -1 << endl;
                    break;
                }
            }
        }
    }
    return 0;
}