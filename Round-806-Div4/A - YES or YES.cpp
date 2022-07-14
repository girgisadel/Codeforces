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
    string s; cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << ((s == "yes") ? "YES\n" : "NO\n");
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
