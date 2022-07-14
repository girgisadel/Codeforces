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
const ll N   = 1e6 + 10;

void burn()
{
    int n; cin >> n;
    vector<int> vis(300, 0);
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        char c; cin >> c;
        if (vis[(int)c] == 0)
            cnt += 2;
        else
            cnt += 1;
        ++vis[(int)c];

    }
    cout << cnt << '\n';
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
