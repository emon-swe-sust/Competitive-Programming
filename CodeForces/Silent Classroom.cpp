#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,ans=0,i;
    string str;
    char arr[26];
    memset(arr,0,sizeof(arr));
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> str;
        arr[str[0]-'a']++;
    }
    for(i=0;i<26;i++)
    {
        int k,l;
        k = arr[i]/2;
        l = arr[i] - k;
        if(k>1)
            ans = ans + (k*(k-1))/2;
        if(l>1)
            ans = ans + (l*(l-1))/2;
    }
    cout << ans << endl;
    return 0;
}
