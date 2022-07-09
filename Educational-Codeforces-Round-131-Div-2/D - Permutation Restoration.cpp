// G-E-R-G-I-S---K
// Let's create! <3
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define jerjis_k_on_da_code ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define all(v) (v).begin(), (v).end()
#define X first
#define Y second

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e6 + 10;

void burn()
{
    ll n;
    cin >> n;
    vector<ll> b(n + 1, 0);
    for (ll i = 1; i <= n; ++i)
        cin >> b[i];

    vector<bool> v(n + 1, true);
    vector<ll> a(n + 1, 0);
    set<pair<ll, ll>> st;
    vector<vector<pair<ll, ll>>> arrow(n + 1);
    vector<vector<pair<ll, ll>>> finished(n + 1);
    for (ll i = 1; i <= n; ++i)
    {
        ll r, l;
        l = (((i + 1) % (b[i] + 1)) == 0) ? ((i + 1) / (b[i] + 1)) : ((i + 1) / (b[i] + 1) + 1);
        if (b[i] == 0)
            r = n;
        else
            r = i / b[i];
        arrow[l].push_back({r, i});
        finished[min(n, r)].push_back({r, i});
    }
    for (ll i = 1; i <= n; ++i)
    {
        for (auto x : arrow[i])
            st.insert(x);
        auto itr = st.begin();
        a[itr->Y] = i;
        st.erase(itr);
        for (auto x : finished[i])
            st.erase(x);
    }
    for (ll i = 1; i <= n; ++i)
        cout << a[i] << ' ';
    cout << '\n';
}
int main()
{
    jerjis_k_on_da_code;

    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int t = 1;
    cin >> t;
    while (t--)
        burn();

    return 0;
}
// LinkedIn     [https://www.linkedin.com/in/gergis-k]
// GitHub       [https://github.com/gergis-k]
// Codeforces   [https://codeforces.com/profile/gerges990]
