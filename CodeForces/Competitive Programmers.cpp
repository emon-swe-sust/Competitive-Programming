#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        string str;
        cin >> str;
        long long i,j,k,l,sum=0,boo=0;
        bool even=false,baa = false;
        for(i=0;i<str.size();i++)
        {
            if(str[i] == '0')
                boo++;
            if((str[i]-'0') %2 == 0 && str[i]!='0')
                even = true;
            sum += (str[i]-'0');
        }
        if(((boo >= 2||(boo>=1 && even)) && sum%3 == 0) || sum == 0)
            cout << "red" << endl;
        else
            cout << "cyan" << endl;
 
    }
 
    return 0;
}
