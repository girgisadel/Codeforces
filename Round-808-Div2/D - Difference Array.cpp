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
const int MX   = 1e5 + 5;

int a[MX];
void burn()
{
    int n; cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    for (int i = n - 1; i >= 1; --i)
    {
        int pr = a[i + 1];
        bool flag = false;
        // cout << pr << ' ';
        for (int j = i; j >= 1; --j)
        {
            flag = a[j] == 0;
            a[j] = pr - a[j];
            pr -= a[j];
            if (flag)
            {
                sort(a + j, a + i + 1);
                break;
            }

        }
        if (!flag) sort(a + 1, a + i + 1);
    }
    // cout << '\n';
    cout << a[1] << '\n';
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
