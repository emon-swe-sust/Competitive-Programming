#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a[105]={0},bal=0,d,n,i,ans=0,j,hi = INT_MIN,k;
   cin >> n >> d;
   for(i=1;i<=n;i++)
   {
        cin >> k;
        a[k]++;

   }
   a[0]=0;
   for(i=1;i<=100;i++)
   {
       if(a[i] != 0)
        bal++;
       a[i]+=a[i-1];
   }
   if(bal == 1)
   {
       cout << 0 ;
       return 0;
   }
  /* for(i=1;i<=100;i++)
    cout << a[i] << " ";
   cout << endl;*/
   for(i=1;i<=100-d;i++)
   {

       if(hi<(a[i+d]-a[i-1]))
       {
          hi = a[i+d]-a[i-1];
         // cout << i+d << " " << a[i+d] << " " << i <<  " " << a[i] << " " << hi << endl;
       }
   }
   if(hi<0)
    cout << 0;
   else
    cout << n-hi;
    return 0;
}
