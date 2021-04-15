#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;



    vector<int>dp(n+1);
    dp[0]=0;

    for(int i=1;i<=n;i++){

        int temp=i;

        int mindigit=INT_MAX;
        while(temp!=0){
            int dig=temp%10;
            temp=temp/10;
            if(dig==0) continue;
            mindigit= min(mindigit,1+dp[i-dig]);
        }

        dp[i]=mindigit;
    }

    cout<<dp[n]<<"\n";
    return 0;
}