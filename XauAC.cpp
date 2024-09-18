#include <bits/stdc++.h>
#define ll long long
#define mod int(1e9 + 7)
#define nmax int(1e6 + 7)
using namespace std;
ll f[35]; // luu do dai xau co chi so i
void init()
{
    f[0] = 3;
    for (int i = 1; i < 35; i++) { // chon 35 vi kha nang độ dài cứ nhân 2 lần lượt => 3 * 2^32 là hết int
        f[i] = 2 * f[i - 1] + i + 3;
    }
}
void Try(int n, int k)
{
    if (k == 0) {
        if (n == 1)
            cout << "a";
        else
            cout << "c";
    } else {
        if (n <= f[k - 1]) // neu n nam trong doan 1-f[k-1]
            Try(n, k - 1);
        else if (n > f[k] - f[k - 1]) //// [ACC/ACCC]/ACC
            Try(n - (f[k] - f[k - 1]), k - 1);
        else {
            if (n == (f[k - 1] + 1))
                cout << "a";
            else
                cout << "c";
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    init();
    int n;
    cin >> n;
    int k;
    for (int i = 0; i < 35; i++) { // xac dinh k
        if (f[i] >= n)
            k = i;
    }
    Try(n, k);
    return 0;
}
