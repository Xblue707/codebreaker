#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,s,e) for(ll i=(s);i<(e);i++)
#define f0r(i,n) for(ll i=0;i<(n);i++)
#define far(i,v) for(auto i:v)
#define per(i,s,e) for(ll i=(s);i>(e);i--)
#define setup ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define output(s) cout << (s);
#define input(s) cin >> (s);

int main() {
	setup
	ll n; input(n);
	ll a[n], b[n];	
	f0r(i,n) input(a[i]);
	f0r(i,n) input(b[i]);
	sort(a,a+n); sort(b,b+n,greater<ll>());

	ll ans(0);
	f0r(i,n) ans += a[i] * b[i];
	output(ans);
}
