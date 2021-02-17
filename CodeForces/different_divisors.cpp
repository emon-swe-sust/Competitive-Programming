#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

vector<int> vec;

void sieve(int n) 
{ 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        {   
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    for (int p=2; p<=n; p++) 
       if (prime[p]) 
        vec.push_back(p); 
} 

int32_t main(){
	fast;
	int t;
	cin >> t;
	sieve(100000);

	while(t--){
		long long d,i,j,first,second;
		cin >>d;

		for(i=0;i<vec.size();i++){
			if(vec[i] - 1 >= d){
				first = vec[i];
				j = i;
				break;
			}
		}
		for(i=j+1;i<vec.size();i++){
			if(vec[i] - first >= d){
				second = vec[i];
				break;
			}
		}
		cout << first * second << endl;
	}
}