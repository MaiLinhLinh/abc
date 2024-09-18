#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> A(n);

    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
        if (A[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    vector<long long> dp(2, 0);
    dp[0] = 1; // ban đầu có 1 dãy chẵn gồm 0 phần tử

    for (int i = 0; i < n; i++) {
        vector<long long> new_dp(2, 0);
        if (A[i] % 2 == 0) { // nếu là 1 số chẵn => thêm vào 1 dãy chẵn thì số lượng dãy chẵn tăng gấp 2
            // ví dụ. 13 15 17 khi thêm 2 vào có 13 15 17 132 152 172
            new_dp[0] = (dp[0] * 2) % MOD;
            new_dp[1] = (dp[1] * 2) % MOD; // them vào 1 dãy lẻ thì số lượng dãy lẻ tăng 2
        } else {
            new_dp[0] = (dp[0] + dp[1]) % MOD; // nếu là lẻ thì dãy lẻ thành dãy chẵn, dãy chẵn thành dãy lẻ.
            new_dp[1] = (dp[1] + dp[0]) % MOD; // nên số lượng dãy chẵn mới = dãy chẵn cũ + dãy lẻ cũ( khi thêm 1 số lẻ vào sẽ thành dãy chẵn)
        }
        dp = new_dp;
    }

    if (k == 0) {
        cout << dp[0] << endl;
    } else {
        cout << dp[1] << endl;
    }

    return 0;
}