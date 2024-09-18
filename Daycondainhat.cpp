#include <bits/stdc++.h>
#define ll long long
#define mod int(1e9 + 7)
#define nmax int(1e6 + 7)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    ll a[n + 1];
    ll b[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    ll cnt = 0, sum = 0;
    ll c[n + 1];
    for (int i = 1; i <= n; i++) {
        c[i] = a[i] - b[i];
    }
    sort(c + 1, c + n + 1, greater<ll>());
    for (int i = 1; i <= n; i++) {
        if (sum + c[i] >= 0) {
            sum += c[i];
            cnt++;
        }
    }
    cout << cnt << "\n";
    return 0;
}
