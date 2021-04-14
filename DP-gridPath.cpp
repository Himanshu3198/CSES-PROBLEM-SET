#include <bits/stdc++.h>
#define mod 1000000007

using namespace std;
int main()
{

    int n;
    cin >> n;
    bool grid[n + 1][n + 1];
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < n+1; j++)
        {
            char ch;
            cin >> ch;
            if (ch == '.')
                grid[i][j] = 0;
            else
            {
                grid[i][j] = 1;
            }
        }
    }

    int dp[n + 1][n + 1];


    for(int i=n;i>=1;i--){
        for(int j=n;j>=1;j--){

            if(i==n and j==n){
                dp[i][j]=1;
            }

            else{
                int path1=(j==n)?0:dp[i][j+1];
                int path2=(i==n)?0:dp[i+1][j];

                dp[i][j]=(path1+path2)%mod;

                if(grid[i][j]){
                    dp[i][j]=0;
                }
            }
        }
    }
    if(grid[n][n]){
        cout<<0<<"\n";
    }
    else{
        cout<<dp[1][1];
    }
    return 0;


    // for (int i= 1; i <=n; i++)
    // {

    //     for (int j = 1; j <= n; j++)
    //     {

    //         cout << grid[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
}