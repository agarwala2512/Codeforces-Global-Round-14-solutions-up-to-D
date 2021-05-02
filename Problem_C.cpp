#include<bits/stdc++.h>
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////
#define db1(x)                cout<<#x<<": "<<x<<"\n"
#define db2(x, y)             cout<<#x<<": "<<x<<" | "<<#y<<": "<<y<<"\n"
#define db3(x, y, z)          cout<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<"\n"
#define db4(a, b, c, d)       cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<"\n"
////////////////////////////////////////////////////////////////////////////////////////
#define ll long long
#define ld long double
#define setbits(x)      __builtin_popcountll(x)
///////////////////////////////////////////////////////////////////////////////////////
#define bhaag_basanti ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///////////////////////////////////////////////////////////////////////////////////////
#define all(a) a.begin(),a.end()
#define allr(a) a.rbegin(),a.rend()
#define sp(x,y)         fixed<<setprecision(y)<<x
///////////////////////////////////////////////////////////////////////////////////////
const ll N = 2e6 + 7;
const ll mod = 1e9 + 7;
const ll INF = 1e18 + 1 ;
///////////////////////////////////////////////////////////////////////////////////////


//return continue break

void solve()
{
	ll n, m, x;
	cin >> n >> m >> x;
	ll a[n], c[n];
	ll mx = -INF, mn = INF;
	m = n - m;
	for (int i = 0; i < n; i++)c[i] = i, cin >> a[i];
	ll segment[n] = {0};
	sort(c, c + n, [&](int i, int j)
	{
		return a[i] < a[j];
	});
	vector<int>v;
	for (int i = 0; i < n; i++)
	{
		if (i < m)
		{
			v.push_back(c[i]);
		} else
			segment[c[i]] = i - m + 1;
	}
	ll j = m;
	for (int i = v.size() - 1; i >= 0; i--)
	{
		segment[v[i]] = segment[c[j]];
		j++;
		if (j == n)j = m;
		a[c[j]] += a[v[i]];

	}
	for (int i = m; i < n; i++)
	{
		mx = max(mx, a[c[i]]);
		mn = min(mn, a[c[i]]);
	}
	if (mx - mn > x)
	{
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
	for (int i = 0; i < n; i++)
	{
		cout << segment[i] << " ";
	}
	cout << '\n';

}

int main()
{
	bhaag_basanti

	ll t = 1;
	cin >> t;
	while (t--)
	{
		solve();

	}
}