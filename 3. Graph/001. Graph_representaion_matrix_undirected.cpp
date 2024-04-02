#include <bits/stdc++.h>
using namespace std;

#define F              first
#define S              second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define ump            unordered_map<int,int>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define nline           "\n"
#define sz(x)          ((int) x.size())
#define mp             make_pair
#define all(v)         v.begin(),v.end()
#define que_max        priority_queue <int>
#define que_min        priority_queue <int, vi, greater<int>>
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      for(auto x : a) cout << x.F << " " << x.S << endl
#define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Deepak cout.tie(NULL);
const int mod = 1e9 + 7;

bool sorta(const pair<int, int> &a, const pair<int, int> &b) {return (a.second < b.second);}
bool sortb(const pair<int, int> &a, const pair<int, int> &b) {return (a.second > b.second);}

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

/*
    Ctrl + Alt + f -> prettier code
    Ctrl + shift + b -> Run and compile the code
    ctrl + Alt + B  => for run TC
    ctrl + enter    => for new TC
*/

/*
    Input:
    n=5, m=6
    1 2
    1 3
    3 4
    2 4
    2 5
    4 5 
*/ 

// Graph representation in matrix
void solve() {
    int n, m;
    cin >> n >> m;
    // one-based indexing graph
    int adj[n + 1][m + 1];
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
}


int32_t main() {
    Code By Deepak  // speed and accuracy

#ifndef ONLINE_JUDGE
    // freopen("input.txt",  "r",  stdin);
    // freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif

    // clock_t z = clock();

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    // cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << " ";
    return 0;
}