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
    int f[100005] = { 0 };
    string s;
    cin >> s;
    int m;
    cin >> m;
    int r = (s.size() + 1) / 2;
    int n = s.size() - 1;
    for (int i = 1; i <= m; i++) {
        int x;
        cin >> x;
        if (x <= r)
            f[x]++;
        else
            f[n - x + 1]++;
    }
    int cnt = 0; // dem so lan bien doi cua phan tu ai;
    for (int i = 1; i <= r; i++) {
        // cout << f[i] << " ";
        cnt += f[i];
        // cout << cnt << "\n";
        if (cnt % 2) {
            // cout << s[i - 1] << " " << s[n - i + 1] << "\n";
            swap(s[i - 1], s[n - i + 1]);
        }
    }
    cout << s << "\n";
    return 0;
}
