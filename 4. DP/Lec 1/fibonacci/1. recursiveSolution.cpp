#include <bits/stdc++.h>
using namespace std;

int f(int n)
{
  if (n <= 1)
    return n;

  // Recursive
  return f(n - 1) + f(n - 2);
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
