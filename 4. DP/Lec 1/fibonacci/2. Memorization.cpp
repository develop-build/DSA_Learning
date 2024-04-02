#include <bits/stdc++.h>
using namespace std;

/*

  TC: O(n)
  SC: O(n) + O(n) => DP Array + Recursion stack space

*/

int f(int n, vector<int> &dp)
{
  if (n <= 1)
    return n;

  // memorization
  if (dp[n] != -1)
    return dp[n];

  return dp[n] = f(n - 1, dp) + f(n - 2, dp);
}

void solve()
{
  int n;
  cin >> n;
  vector<int> dp(n + 1, -1);
  cout << f(n, dp);
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
