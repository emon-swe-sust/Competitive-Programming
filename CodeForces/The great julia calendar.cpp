sing namespace std;
 
int main()
{
    int n,i,j,sum=0;
    cin >> n;
    if(n<10)
    {
        if(n==0)
            cout << 0 << endl;
        else
            cout << 1 << endl;
        return 0;
    }
    while(1)
    {
        int k ,l=0,p;
        p=n;
        for(i=p;i>0;i/=10)
        {
            k=(i%10);
            l=max(k,l);
        }
        n=n-l;
        sum++;
        if(n==0)
        {
            cout << sum;
            return 0;
        }
    }
 
    return 0;
}
