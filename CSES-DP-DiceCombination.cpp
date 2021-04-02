#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
int main()
{

    int n;
    cin >> n;

    vector<ll> dp(n+1 , 0);
    dp[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            if (j > i)
            {
                break;
            }

            dp[i] = (dp[i] + (dp[i-j])) % mod;
        }
    }

    cout << dp[n] << "\n";

    return 0;
}