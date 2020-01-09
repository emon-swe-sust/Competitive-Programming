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
        int n,i,j,k,l=0,m=0;
        cin >> n;
        int arr[n];
        map<int,int>mp,mp1;
        vector<pair<int,int> >vec;
        for(i=0;i<n;i++)
        {
            cin >> arr[i];
            vec.push_back({arr[i],i});
            mp1[arr[i]]++;
        }
 
        sort(vec.begin(),vec.end());
 
        for(j=0;j<vec.size();j++)
        {
            i = vec[j].second;
            if(mp[arr[i]] > 0)
            {
                l++;
                k = arr[i];
                k = arr[i] - arr[i]%10;
                while(mp[k]!=0 || mp1[k] != 0)
                {
                    k++;
                    //cout << k << endl;
                }
 
                mp[k]++;
                arr[i] = k;
            }
            else
                mp[arr[i]]++;
        }
        cout << l << endl;
        for(i=0;i<n;i++)
        {
            cout << setfill('0') << setw(4);
            cout << arr[i] << endl;
        }
 
    }
 
	return 0;
}
