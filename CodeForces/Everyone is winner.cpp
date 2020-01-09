
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	for(int x=0;x<1000;x++);
	int q;
	cin >> q;
	while (q--)
	{
		int n;
		cin>>n;
		vector<int>arr,vec1,vec2;
		arr.push_back(0);
		int i = 1;
		while (i * i <= n)
		{
			int bal = n / i;
 
			if (i == bal)
				arr.push_back(i);
			else
			{
				arr.push_back(i);
				arr.push_back(bal);
			}
			i++;
		}
 
		sort(arr.begin(),arr.end());
		cout<<arr.size()<<endl;
 
		for( i=0;i<arr.size();i++)
			cout<<arr[i]<<" ";
		cout<<endl;
 
	}
 
 
return 0;
}
