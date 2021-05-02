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
	ll n, l, r;
	cin >> n >> l >> r;
	vector<int>v1, v2;
	for (int i = 0; i < l; i++)
	{
		ll x;
		cin >> x;
		v1.push_back(x);
	}
	for (int i = 0; i < r; i++)
	{
		ll x;
		cin >> x;
		v2.push_back(x);
	}
	sort(all(v1));
	sort(all(v2));
	ll i = 0, j = 0;
	ll cost = 0;
	map<int, int>m1, m2;
	ll cnt1 = 0, cnt2 = 0;
	while (i < l and j < r)
	{
		if (v1[i] == v2[j])
		{
			i++;
			j++;
		} else if (v1[i] < v2[j])
		{
			m1[v1[i]]++;
			i++;
		} else
		{
			m2[v2[j]]++;
			j++;
		}
	}
	for (; i < l; i++)
	{
		m1[v1[i]]++;
	}
	for (; j < r; j++)
	{
		m2[v2[j]]++;
	}
	ll pair1 = 0, pair2 = 0;
	for (auto x : m1)
	{
		pair1 += (x.second / 2);
		if (x.second & 1)cnt1++;
	}
	for (auto x : m2)
	{
		pair2 += (x.second / 2);
		if (x.second & 1)cnt2++;
	}
	// db4(pair2, pair1, cnt2, cnt1);
	if (cnt2 > cnt1)
	{
		swap(cnt1, cnt2);
		swap(pair1, pair2);
	}
	ll ans = pair1 + pair2 + cnt2;
	cnt1 -= cnt2;
	ll can_take = min(cnt1, 2 * pair2);
	cnt1 -= can_take;
	cout << ans + cnt1 + can_take / 2 << '\n';
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