/*
 author:himanshu3198
 https://cses.fi/problemset/task/1679/
*/
#include     <bits/stdc++.h>
#define      ll long long int
#define      fr(i, n) for (int i = 0; i < (n); i++)
#define      rep(i, a, b) for (int i = (a); i < (b); i++)
#define      FORR(i, n) for (int i = (n); i >= 0; i--)
#define      fst first
#define      snd second
#define      E "\n"
#define      pb push_back
#define      mp make_pair
#define      all(x) (x).begin(), (x).end()
#define      MOD 1000000007LL
#define      MAX(a, b) ((a) > (b) ? (a) : (b))
#define      MIN(a, b) ((a) < (b) ? (a) : (b))
#define      ABS(x) ((x) < 0 ? -(x) : (x))
#define      setbits(x) __builtin_popcount(x)
#define      vi vector<int>
#define      vl vector<long long int>
#define      vvi vector<vector<int>>
#define      vvl vector<vector<long long int>>
#define      INF 1e18
#define      _Y puts("YES")
#define      _N puts("NO")
#define      showArr(v) for(auto it:v) cout<<it<<" "; cout<<E;
#define      Print(ans) cout<<ans<<E;
#define      Nitro()                      \
             ios_base::sync_with_stdio(false); \
             cin.tie(NULL);
 
using namespace std;

void himanshu3198()
{
       ll n,m;
       cin>>n>>m;
       vector<ll>graph[n+1];
       vector<ll>indegree(n+1,0ll);
       while(m--){

           ll a,b;
           cin>>a>>b;
           graph[a].pb(b);
           indegree[b]++;
       }
        ll totalCourse=n;
        queue<ll>q;
        for(int i=1;i<=n;i++){
          if(!indegree[i]){
             q.push(i);
          } 
       }
       vector<ll>res;
       while(!q.empty()){

           auto curr=q.front();
           res.pb(curr);
           q.pop();
           totalCourse--;
           for(auto it:graph[curr]){

               indegree[it]--;
               if(indegree[it]==0) q.push(it);
           }
       }
       if(totalCourse==0){
           for(auto it:res) cout<<it<< " ";
           cout<<"\n";
       }else{
           cout<<"IMPOSSIBLE\n";
       }
  
}
 
 
int main()
{
    Nitro();
    int t = 1;
    // cin >> t;
   
 
    while (t--)
    {
 
        himanshu3198();
    }
 
    return 0;
}
