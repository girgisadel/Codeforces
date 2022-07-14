// G-E-R-G-I-S---K
// Let's create! <3
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define burning_on_da_code ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define all(v) (v).begin(), (v).end()
#define X first
#define Y second

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e6 + 10;

void burn()
{
    int n, m;
    cin >> n >> m;
    int tasks[n + 1];
    memset(tasks, 0, sizeof(tasks));
    for (int i = 0; i < m; ++i)
    {
        int x;
        cin >> x;
        --x;
        ++tasks[x];
    }
    ll l = 0, r = 1e10;
    while (l < r)
    {
        ll mid = (l + r) / 2;
        ll time = 0, work = 0;
        for (int i = 0; i < n; ++i)
        {
            if (tasks[i] <= mid)
                time += (mid - tasks[i]) / 2;
            else
                work += tasks[i] - mid;
        }
        if (time >= work)
            r = mid;
        else
            l = mid + 1;
    }
    cout << l << '\n';
}
int main()
{
    burning_on_da_code;

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
