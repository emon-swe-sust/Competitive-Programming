#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int que;
    cin >> que;
    while(que--)
    {
        string str1,str2;
        cin >> str1 >> str2;
        int i,j=0,k,num=0;
        for(i=0;i<str1.size();i++)
        {
            char x = str1[i];
            num=0;
            for(k=i;k<=str1.size();k++)
            {
                if(x == str1[k])
                {
                  num++;
                }
                else break;
            }
            i=k-1;
            int numb=0;
            for(;j<str2.size();j++)
            {
                if(str2[j] == x)
                        numb++;
                else break;
            }
            if(numb < num)
            {
                cout << "NO" << endl;
                goto here;
            }
        }
        if(j!=str2.size())
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
        here:;
    }
    return 0;
}
