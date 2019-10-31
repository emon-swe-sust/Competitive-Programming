#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,i,j,k=0,l;
    cin >> n;
    int arr[n];
    vector<char>vec;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int last = n-1;
    int first = 0;
    int run = 0;
 
    while(first <= last)
    {
        bool chole = false;
        if(arr[first] > arr[last])
        {
            if(arr[last] > run)
            {
                vec.push_back('R');
                run = arr[last];
                last--;
                chole = true;
            }
            else if(arr[first] > run)
            {
                vec.push_back('L');
                run = arr[first];
                first++;
                chole = true;
            }
        }
        else
        {
            if(arr[first] > run)
            {
                vec.push_back('L');
                run = arr[first];
                first++;
                chole = true;
            }
            else if(arr[last] > run)
            {
                vec.push_back('R');
                run = arr[last];
                last--;
                chole = true;
            }
        }
        if(!chole)
            break;
    }
    cout << vec.size() << endl;
    for(i=0;i<vec.size();i++)
        cout << vec[i];
 
    return 0;
}
