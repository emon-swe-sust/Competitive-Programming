#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	int q;
	cin >> q;
	while(q--)
    {
        int n,i,j,k,l;
        cin >> n;
        int arr[n+1],brr[n+1];
        for(i=1;i<=n;i++)
        {
            cin >> k;
            arr[i] = k;
        }
 
        int curr=1;
        int lim = 1,bal=n,mov = n-1,tar;
        while(1)
        {
            if(mov <= 0 || curr >= n)
                break;
            bal = n;
            for(j=curr;j<=n;j++)
            {
                //cout << arr[j] << " " << bal << " " << j << " " << curr << " " << mov << endl;
                if(arr[j] < bal && j-curr <= mov)
                {
                    bal = arr[j];
                    tar = j;
                 }
            }
            if(tar == curr)
            {
                curr++;
                if(curr >= n)
                    break;
                continue;
            }
            //cout << curr << " - " << tar << endl;
            for(i=tar;i>curr;i--)
                arr[i] = arr[i-1];
            arr[curr] = bal;
            mov = mov - (tar-curr);
            curr = tar;
        }
 
        for(i=1;i<=n;i++)
            cout << arr[i] << " ";
        cout << endl;
    }
 
    return 0;
}
