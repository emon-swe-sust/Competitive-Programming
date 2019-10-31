
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string str;
    int n,k,i,j;
    cin >> n >> k >> str;
    if(n == 1 && k > 0)
    {
        cout << '0' << endl;
        return 0;
    }
    if(k>0 && str[0] != '1')
    {
        str[0] = '1';
        k--;
    }
    i = 1;
    while(i<=k && i<str.size())
    {
        if(str[i] != '0')
            str[i] = '0';
        else
            k++;
        //cout << str << " " ;
        i++;
    }
    cout << str << endl;
    return 0;
}
