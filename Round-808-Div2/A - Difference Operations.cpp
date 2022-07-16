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
 
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N   = 1e6 + 10;
 
void burn()
{
    int n; cin >> n;
    int a[n];
    for (int  i = 0; i < n; ++i)
        cin >> a[i];
    bool f = false;
    for (int  i = 1; i < n; ++i)
    {
        if (a[i] % a[0] != 0)
        {
            f = true;
            break;
        }
    }
    if (f) cout << "NO\n";
    else cout << "YES\n";
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
