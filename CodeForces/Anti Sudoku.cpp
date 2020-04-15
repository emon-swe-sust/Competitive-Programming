#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >>t ;
	while(t--)
    {
        int arr[9][9];
        int i,j;
        for(i=0;i<9;i++)
        {
            string str;
            cin >> str;
            for(j=0;j<9;j++)
                arr[i][j] = str[j] - '0';
        }

        arr[0][0] = arr[1][0];
        arr[3][1] = arr[4][1];
        arr[6][2] = arr[7][2];

        arr[1][3] = arr[2][3];
        arr[4][4] = arr[5][4];
        arr[7][5] = arr[8][5];

        arr[2][6] = arr[3][6];
        arr[5][7] = arr[6][7];
        arr[8][8] = arr[0][8];

        for(i=0;i<9;i++)
        {
            for(j=0;j<9;j++)
                cout << arr[i][j];
            cout << endl;
        }
    }

	return 0;
}
