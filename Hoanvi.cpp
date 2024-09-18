#include <bits/stdc++.h>
#define ll long long
#define mod int(1e9 + 7)
#define nmax int(1e6 + 7)
using namespace std;
// y tuong: 1 2 3 4 5 thi hoan vi de co Mi =i % Pi max
// thi hoan vi do la 2 3 4 5 1 => tong cac Mi la 1 + 2 + 3 + 4
// tuong tu. 1 2 3 4 5 6 7 8 9 thi hoan vi la 2 3 4 5 6 7 8 9 1
// => i% Pi = 1, 2, 3 4 5 6 7 8 => tong = 1 +2 +3...+ 8;
// => cong thuc: tong Mi max = (n-1 + 1)*(n-1)/2;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    ll ans = n * (n - 1) / 2;
    cout << ans;
    return 0;
}
