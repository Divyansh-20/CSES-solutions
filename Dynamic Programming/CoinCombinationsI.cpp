//Hacktoberfest for the win?//
#include <bits/stdc++.h>
using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
  #define int long long 
  const int N = 100005;
  #define all(v) v.begin(),v.end()
  #define double long double
  #define trace1(x)                cerr<<#x<<": "<<x<<endl
  #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
  #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
  #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
  #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<< ": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)
const int MOD = 1000000007;
const int INF = (1LL << 62) - 1;
 
int32_t main()
{
 
 
 
    IOS
 
 
 
    int n, x;
    cin >> n >> x;
 
    vector<int> c(n+1);
 
    for(int i = 1; i <= n; i++)
    {
      cin >> c[i];
    }
 
    vector<int> dp(x+1);
    // dp[x] denotes the number of distinct ways to produce a sum of x 
    // using available coins 
 
    dp[0] = 1;
 
    for(int i = 1; i <= x ;i++)
    {
      for(int j = 1; j <= n; j++)
      {
        if(i-c[j] >=0)dp[i] += dp[i-c[j]]%MOD;
        dp[i]%=MOD;
      }
    }
 
    cout << dp[x];
 
 
 
    return 0;
}
