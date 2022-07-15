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
    short n; cin >> n;
    vector<short> a(n);
    for (auto &i : a) cin >> i;

    for (int i = 0; i < n; ++i)
    {
        int b; cin >> b;
        string current; cin >> current;
        for(int j = 0; j < b; j++)
        {
            if (current[j] == 'U') --a[i];
            else ++a[i];
            if (a[i] > 9) a[i] -= 10;
            if (a[i] < 0) a[i] += 10;
        }
    }
    for (auto i : a) cout << i << ' ';
    cout << '\n';
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
