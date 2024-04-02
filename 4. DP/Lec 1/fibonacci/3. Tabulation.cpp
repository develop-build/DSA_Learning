#include <bits/stdc++.h>
using namespace std;
/*

  TC: O(n)
  SC: O(n) => DP Array (But no recursion stack space)

*/
void solve()
{
  int n;
  cin >> n;
  vector<int> dp(n + 1, -1);

  // Tabulation => from base case to n
  dp[0] = 0, dp[1] = 1;
  for (int i = 2; i <= n; i++)
    dp[i] = dp[i - 1] + dp[i - 2];
  cout << dp[n];
}

int main()
{
  int t;
  t = 1;
  // cin>>t;
  while (t--)
  {
    solve();
    // cout<<"\n";
  }
  return 0;
}
