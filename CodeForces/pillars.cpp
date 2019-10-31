#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long n,i,j,k=1,high=0,pos,left,right;
    bool lft = true,rgt = true;
    cin >> n;
    long long arr[n+1];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
        if(arr[i]>high)
        {
            high = arr[i];
            pos = i;
        }
    }
    if(pos > 0)
        left = pos-1;
    else lft = false;
 
    if(pos < n-1)
        right = pos + 1;
    else rgt = false;
 
    while(1)
    {
        if(k == n)
            break;
        if(!lft && !rgt && k!=n){
            cout << "NO";
            return 0;
        }
        if(!lft && rgt)
        {
            if(arr[right] < arr[pos])
            {
                k++;
                arr[pos] = arr[right];
                if(right < n-1)
                    right++;
                else rgt = false;
                continue;
            }
            else
            {
                cout << "NO" << endl;
                return 0;
            }
 
        }
 
         if(!rgt && lft)
        {
            if(arr[left] < arr[pos])
            {
                k++;
                arr[pos] = arr[left];
               if(left > 0)
                    left--;
                else lft = false;
                continue;
            }
            else
            {
                cout << "NO" << endl;
                return 0;
            }
 
        }
 
        if(arr[left] > arr[right] && arr[left] < arr[pos])
        {
            arr[pos] = arr[left];
            arr[left] = 0;
            k++;
            if(left > 0)
                left--;
            else lft = false;
        }
        else if(arr[right] > arr[left] && arr[right] < arr[pos])
        {
            arr[pos] = arr[right];
            arr[right] = 0;
            k++;
            if(right < n-1)
                right++;
            else rgt = false;
        }
        else
        {
            if(k == n)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
