#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long arr[3],d,i,j;
    for(i=0;i<3;i++)
        cin >> arr[i];
    cin >> d;
    sort(arr,arr+3);
    long long ans = 0,x,z,y=0,ans1=0,ans2=0;
    ans = max(y,(arr[0]+d-arr[1]));
    x = ans;
    ans = ans + max(y,x+arr[1]+d-arr[2]);
    ans1 = max(y,(arr[1]-(arr[0]-d)))+max(y,arr[0]+d-arr[2]);
    ans2 = max(y,arr[0]-(arr[1]-d))+max(y,(arr[1]+d)-arr[2]);
 
    cout << min(ans,min(ans1,ans2)) ;
    return 0;
}
