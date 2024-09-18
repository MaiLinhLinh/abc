#include <bits/stdc++.h>
#define ll long long
#define mod int(1e9 + 7)
#define nmax int(1e6 + 7)
using namespace std;
string llmax = "", intmax = "";
void changell()
{
    ll n = LLONG_MAX;
    while (n) {
        llmax += char(n % 10 + '0');
        n /= 10;
    }
    reverse(llmax.begin(), llmax.end());
}
void changeint()
{
    int n = INT_MAX;
    while (n) {
        intmax += char(n % 10 + '0');
        n /= 10;
    }
    reverse(intmax.begin(), intmax.end());
}
bool cmp(string a, string b)
{ // ( a > b)
    if (a.size() == b.size())
        return a > b;
    return a.size() > b.size();
}
int check(string s)
{ // neu s co ki tu khac so thi = 0
    for (int i = 0; i < s.size(); i++) {
        if (!isdigit(s[i]))
            return 0;
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    changell();
    changeint();
    ll sum = 0;
    while (cin >> s) {
        if (check(s)) {
            if (cmp(s, intmax) && cmp(s, llmax) == 0) {
                ll n = stoll(s);
                // cout << n << "\n";
                sum += n;
            }
        }
    }
    cout << sum << "\n";
    return 0;
}
