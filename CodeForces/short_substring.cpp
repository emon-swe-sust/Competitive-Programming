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
        string str;
        int i;
        cin >> str;
        cout << str[0];
        for(i=1;i<str.size()-1;i = i+2)
            cout << str[i];
        cout << str[str.size()-1] << endl;
    }
	return 0;
}