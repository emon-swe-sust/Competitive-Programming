#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string str;
    int i,j,k=0,l=0;
    cin >> str;
    for(i=0;i<str.size();i++)
    {
        if(str[i] == '0')
        {
            str.erase(str.begin()+i);
            k=1;
            break;
        }
    }
    if(k==1)
        cout << str;
    else
    {
        for(i=0;i<str.size()-1;i++)
            cout << str[i];
    }
    return 0;
}
