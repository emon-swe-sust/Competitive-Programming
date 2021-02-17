#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int32_t main(){
	fast;
	int t; cin>>t; while(t--){
		string s,a,b,c; cin>>s;
		int n=s.size();
		for(int i=0;i<n;i++){
			char x=s[i];
			if(isalpha(x)){
				c+="1";
				a+=x;
			}else{
				c+="0";
				b+=x;
			}
		}sort(a.rbegin(), a.rend());
		sort(b.rbegin(), b.rend());
		s="";
		for(int i=0;i<n;i++){
			if(c[i]=='1'){
				s+=a.back();
				a.pop_back();
			}else{
				s+=b.back();
				b.pop_back();
			}
		}cout<<s<<endl;
	}
}