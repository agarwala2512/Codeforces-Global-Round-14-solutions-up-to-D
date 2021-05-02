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
	ll n;
	cin >> n;
	if (n & 1)
	{
		cout << "NO\n";
		return;
	}
	if ((n / 2 == (ll)sqrt(n / 2) * (ll)sqrt(n / 2)) or (n % 4 == 0 and n / 4 == (ll)sqrt(n / 4) * (ll)sqrt(n / 4)))
	{
		cout << "YES\n";
		return;
	}
	cout << "NO\n";
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