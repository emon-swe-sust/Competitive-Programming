#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int x=0,y=0,n,num=0,i,j,area=0;
    string str;
    cin >> i >> str;
    for(i=0;i<str.size();i++)
    {
        if(str[i] == 'U')
            y++;
        else
            x++;
        if(area==0)
        {
            if(x>y)
                area=1;
            else if(y>x)
                area=2;
        }
        if(area == 1 && y > x)
        {
            area = 2;
            num++;
        }
        else if(area == 2 && x > y)
        {
            area = 1;
            num++;
        }
    }
    cout << num << endl;
    return 0;
}
