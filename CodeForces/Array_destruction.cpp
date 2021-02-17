#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool f(vector<int> v,int j){
	int x=v.back()+v[j];
	int new_x=v.back();
	vector<pair<int,int>> steps;
	steps.push_back({new_x,v[j]});
	v.pop_back(); v.erase(v.begin()+j);
	int sex=x;
	while(!v.empty()){
		x=new_x;
		new_x=v.back();
		int l=0,r=v.size()-2; j=-1;
		while(l<=r){
			int m=(l+r)/2;
			if(v[m]==x-new_x){
				j=m;
				break;
			}else if(v[m]>x-new_x){
				r=m-1;
			}else{
				l=m+1;
			}
		}
		if(j==-1)return 0;
		steps.push_back({new_x,v[j]});
		v.pop_back(); v.erase(v.begin()+j);
	}
	cout<<"YES"<<endl;
	cout<<sex<<endl;
	for(auto x:steps)cout<<x.first<<' '<<x.second<<endl;
	return 1;
}

int32_t main(){
	fast;
	int tt;
	cin >> tt;
	while(tt--)
	{
		int n,i,j,x,k,bal=0;
		cin >> n;
		n = n*2;
		vector<int> v(n);

		for(auto &x:v)cin>>x;

		sort(v.begin(), v.end());
		for(i=0;i+1<n;i++){
			if(f(v,i)){
				bal=1;
				break;
			}
		}
		if(!bal)cout<<"NO"<<endl;
	}
	return 0;
}