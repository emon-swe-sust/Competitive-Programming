#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	queue<long long>qu;
    long long n,k,i,j,l,m;
    cin >> n >> k;
    long long arr[n];
    map<long long,bool>mp;
 
	for(i=0;i<n;i++)
        cin >> arr[i];
 
    for(i=0;i<n;i++)
    {
        if(qu.size()<k && !mp[arr[i]])
        {
            qu.push(arr[i]);
            mp[arr[i]]=true;
        }
        else if(!mp[arr[i]])
        {
            mp[qu.front()] = false;
            qu.pop();
            qu.push(arr[i]);
            mp[arr[i]] = true;
        }
    }
 
    cout << qu.size() << endl;
    vector<long long>vec;
    while(!qu.empty())
    {
        vec.push_back(qu.front());
        qu.pop();
    }
    for(i=vec.size()-1;i>=0;i--)
        cout << vec[i] << " ";
 
	return 0;
}
