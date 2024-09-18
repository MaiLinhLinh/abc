#include <bits/stdc++.h>
#define ll long long
#define mod int(1e9 + 7)
#define nmax int(1e6 + 7)
using namespace std;
map<double, int> nghiem;
void solve(int a, int b, int c)
{
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "-1";
                return;
            }
        } else
            nghiem[-1.0 * c / b] == 1;
    } else {
        double delta = 1.0 * b * b - 4 * 1.0 * a * c;
        if (delta == 0)
            nghiem[-1.0 * b / (2 * a)] = 1;
        else if (delta > 0) {
            delta = sqrt(delta);
            nghiem[(-b - delta) / (2 * a)] = 1;
            nghiem[(-b + delta) / (2 * a)] = 1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int dem = 0, check = 0;
    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;
        solve(a, b, c);
    }
    if (check == 1)
        cout << "-1";
    else
        cout << dem;
    return 0;
}
