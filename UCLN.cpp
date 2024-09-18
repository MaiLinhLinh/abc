#include <bits/stdc++.h>
#define ll long long
#define mod int(1e9 + 7)
#define nmax int(1e6 + 7)
using namespace std;
int f[nmax];
/*
y tuong: de tim ucln cua 2 so trong mang la lon nhat
thi ta se di tim phan tu lon nhat cua mang, giam dan phan tu do, va kiem tra moi gia tri co la UCLN cua it nhat 2 so trong mang khong
khi duyet tu lon ve be, neu tim dc UCLN thi break, va do cx la gtln cua cac UCLN
vi du 4 14 15 7 9
4 7 9 14 15 => maxx = 15, danh dau so lan xuat hien
voi i = 15, duyet k = 15, k <= max, k += 15 de kiem tra xem trong mang ton tai boi cua 15 khog, neu cnt > 1 => 15 laf UCLN
vidu 1 6 9 2 => maxx = 9, f[6] = 1, f[9] = 1; khi i = 3, k = 3 => cnt = 0, k = 6 => cnt = 1 => co  1 boi cua i = 3, k = 9 => cnt = 2 => co 2 boi cua i = 3 => 3 la UCLN can tim

*/
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            f[a[i]]++; // dem so lan xuat hien cua cac phan tu trong mang
        }
        sort(a, a + n);
        int maxx = a[n - 1];
        int check = 0;
        for (int i = maxx; i >= 1; i--) {
            int cnt = 0; // dem boi cua i
            for (int j = i; j <= maxx; j += i)
                cnt += f[j]; // duyet cac boi cua i, boi nao ton tai trong mang da cho thi cnt + voi so lan xuat hien cua boi do
            // cout << cnt << "\n";
            if (cnt > 1) { // neu so boi >= 2 thi i la UCLN can tim
                cout << i << "\n";
                check = 1;
                break;
            }
        }
        if (check == 0) {
            cout << "1\n"; // neu khong tim dc thi UCLN la 1
        }
        for (int i = 0; i < n; i++)
            f[a[i]] = 0; // xong 1 bo test thi cho tan so ve 0 vi khai bao mang dem ngoai main
    }
    return 0;
}
