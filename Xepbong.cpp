#include <bits/stdc++.h>
#define ll long long
#define mod int(1e9 + 7)
#define nmax int(1e6 + 7)
using namespace std;
ll a[55][55];
void sinhBell() // phan hoach n
{
    a[1][1] = 1;
    for (int i = 2; i <= 55; i++) {
        a[i][1] = a[i - 1][i - 1];
        for (int j = 2; j <= i; j++) {
            a[i][j] = a[i - 1][j - 1] + a[i][j - 1];
        }
    }
    // cout << a[1][1] << "\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sinhBell();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << a[n][n] << "\n";
    }
    return 0;
}
