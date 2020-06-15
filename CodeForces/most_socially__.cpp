#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n,i,j,k,inc=0,dec=0,lst;
        cin >> n;
        int arr[n];
        vector<int> vec;
        for(i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        vec.push_back(arr[0]);

        if(arr[1] > arr[0])
            inc = 1;
        else
            dec = 1;

        for(i=1;i<n;i++)
        {
            if(arr[i] > arr[i-1] && inc == 1)
            {
                continue;
            }
            else if(arr[i] > arr[i-1] && inc == 0)
            {
                inc = 1;
                dec = 0;
                vec.push_back(arr[i-1]);
                lst = i-1;
            }
            else if(arr[i] < arr[i-1] && dec == 1)
            {
                continue;
            }
            else if(arr[i] < arr[i-1] && dec == 0)
            {
                dec = 1;
                inc = 0;
                vec.push_back(arr[i-1]);
                lst = i-1;
            }
        }
        if((lst != n-1 && vec[vec.size()-1] != arr[n-1]) || (vec.size() == 1))
            vec.push_back(arr[n-1]);

        cout << vec.size() << endl;
        for(i=0;i<vec.size();i++)
            cout << vec[i] << " ";
        cout << endl;
    }
    return 0;
}