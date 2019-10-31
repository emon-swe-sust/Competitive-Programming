#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,i,j,k=0,l=0;
    string str;
    cin >> n >> str;
    for(i=0;i<str.size();i++)
    {
        if(str[i] == '0')
            k++;
        else
            l++;
    }
    if(k!=l)
    {
        cout << 1 << endl;
        cout << str << endl;
    }
    else
    {
        cout << 2 << endl;
        for(i=0;i<str.size()-1;i++)
            cout << str[i];
        cout << " " << str[n-1] << endl;
    }
    return 0;
}
