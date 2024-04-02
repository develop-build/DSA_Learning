#include <bits/stdc++.h>
using namespace std;
/*

  TC: O(n)
  SC: O(1) => Calculating via variables only!

*/
int f(int n)
{
  int prev = 1, prev2 = 0;
  int ans;
  for (int i = 2; i <= n; i++)
  {
    ans = prev + prev2;
    prev2 = prev;
    prev = ans;
  }
  return ans;
}

void solve()
{
  int n;
  cin >> n;
  cout << f(n);
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
