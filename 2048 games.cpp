#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int n,i,j,k,l;
        cin >> k;
        int arr[2049];
        memset(arr,0,sizeof(arr));
        int lst[] ={1,2,4,8,16,32,64,128,256,512,1024,2048};
        for(i=0;i<k;i++)
        {
            cin >> l;
            if(l<=2048)
            {
                arr[l]++;
            }
        }
        for(i=0;i<11;i++)
        {
            //cout << " - " << lst[i+1];
            arr[lst[i+1]] += arr[lst[i]]/2;
        }
        if(arr[2048] > 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        /*for(i=0;i<12;i++)
            cout << lst[i] << " " << arr[lst[i]] << "    " ;/*/
    }
 
    return 0;
}
