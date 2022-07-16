// G-E-R-G-I-S---K
// Let's create! <3
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define burning_on_da_code ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define all(v)  (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()
#define X first
#define Y second

const ll  MOD  = 1e9 + 7;
const ll  INF  = 1e18;
const ll  N    = 1e6 + 10;
const int MX   = 1e6 + 7;

ll a[MX];
void burn()
{
    ll n, l, r;
    cin >> n >> l >> r;
    int res = 1;
    for(ll i = 1 ; i <= n ; ++i)
    {
        a[i] = ((l - 1) / i + 1) * i;
        res = res && a[i] <= r;
    }
    if(res)
    {
        cout << "YES\n";
        for (ll i = 1; i <= n; ++i)
            cout << a[i] << ' ';
        cout << '\n';
    }
    else cout << "NO\n";
}
int main()
{
    burning_on_da_code;

    //freopen("", "r", stdin);
    //freopen("", "w", stdout);

    int t = 1;
    cin >> t;
    while(t--)
        burn();

    return 0;
}
// LinkedIn     [https://www.linkedin.com/in/gergis-k]
// GitHub       [https://github.com/gergis-k]
// Codeforces   [https://codeforces.com/profile/gerges990]
