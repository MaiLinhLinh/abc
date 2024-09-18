#include <bits/stdc++.h>
#define ll long long
#define mod int(1e9 + 7)
#define nmax int(1e6 + 7)
using namespace std;

set<double> nghiem;

int solve(int a, int b, int c)
{
    if (a == 0) {
        if (b == 0) {
            if (c == 0)
                return -1;
        } else {
            nghiem.insert(-1.0 * c / b);
        }
    } else {
        double delta = b * b - 4 * a * c;
        if (delta >= 0) {
            delta = sqrt(delta);
            nghiem.insert((-b - delta) / (2 * a));
            nghiem.insert((-b + delta) / (2 * a));
        }
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (solve(a, b, c) == -1) {
            cout << -1 << "\n";
            return 0;
        }
    }

    cout << nghiem.size() << "\n";

    return 0;
}
