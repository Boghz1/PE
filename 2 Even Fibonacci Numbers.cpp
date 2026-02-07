// 4613732
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef map<int, int> mii;


# define inp0(a, n) for (int i = 0; i < n; i++) cin >> a[i];
# define inp1(a, n) for (int i = 1; i <= n; i++) cin >> a[i];
# define endl "\n"
# define no "NO"
# define ys "YES"
# define sep " "
# define sz(a) a.size() 
# define clr(a) memset(a, 0, sizeof a);
# define fi first
# define se second
# define pb push_back
# define mp make_pair
# define all(vec) vec.begin(), vec.end()
# define fast ios::sync_with_stdio(false); cin.tie(nullptr);
# define f(r) for(int i = 0; i < r; i++)
# define f2(l, r) for(int j = l; j < r; j++)
# define f3(l, r) for(int k = l; k < r; k++)
# define elif else if
# define cont continue
# define ub upper_bound
# define lb lower_bound
# define gr(g, n) f(n) { int u, v; cin >> u >> v; g[u].pb(v); g[v].pb(u); }

# define coutf( ... ) print ( __VA_ARGS__ )
template < typename T > void print(const T& a) { cout << a << endl; }
template < typename T, typename ... Args > void print(const T& a, const Args&... args) { cout << a << ' '; print(args...); }

//const ll mod = 1000000007;

const int maxn = 1e6 + 20;

ll a, b, sum;

int main() {
	a = 1;
	b = 2;
	sum += b;
	while (b <= 4000000) {
		int tmp = a;
		a = b;
		b += tmp;
		if (b % 2 == 0)
			sum += b;
	}
	coutf(sum);
}
