#include <bits/stdc++.h>

#define MASK(i) (1LL << (i))
#define BIT(x, y) (((x) >> (y)) & 1)
#define sz(v) ((ll) (v).size())
#define all(v) (v).begin(), (v).end()
#define uni(v) sort(all(v)), (v).resize(unique(all(v)) - (v).begin())
#define F first
#define S second
#define pii(x, y) make_pair(x, y)
#define __builtin_popcount __builtin_popcountll
#define __builtin_ctz __builtin_ctzll
#define __builtin_clz __builtin_clzll
#define lg(x) (63 - __builtin_clz(x))

template <class X, class Y>
    bool minimize(X &x, const Y &y)
    {
        if (x > y) {x = y; return 1;}
        return 0;
    }

template <class X, class Y>
    bool maximize(X &x, const Y &y)
    {
        if (x < y) {x = y; return 1;}
        return 0;
    }

using namespace std;
typedef long long ll;
const int N = 4e5 + 5;
const int M = 5e6;
const int mod = 998244353;

int n, p[M + 5];

void Input(void)
{
    cin >> n;
    for (int i = 2; i <= M; i += 2) p[i] = 2;
    for (int i = 3; i <= M; i += 2)
        if (p[i] == 0)
        {
            p[i] = i;
            if (i <= M / i)
                for (int j = i * i; j <= M; j += 2 * i)
                    if (!p[j]) p[j] = i;
        }
}

struct HASH
{
    int mod, base, cur, pw[M + 5];
    bool isOn[M + 5];
    HASH (int _mod = 0, int _base = 0)
    {
        mod = _mod, base = _base, cur = 0;
        pw[0] = 1, isOn[0] = 0;
        for (int i = 1; i <= M; i ++)
        {
            pw[i] = 1LL * pw[i - 1] * base % mod;
            isOn[i] = 0;
        }
    }
    void rev(int i)
    {
        if (isOn[i] == 0) cur = (cur + pw[i]) % mod;
        else cur = (cur - pw[i] + mod) % mod;
        isOn[i] = 1 - isOn[i];
    }
};

map<pair<int, int>, int> Map;

void solve(void)
{
    ll ans = 0;
    HASH h1(1000000007, 5000011), h2(998244353, 10000019);
    Map[pii(h1.cur, h2.cur)] ++;
    for (int i = 1; i <= n; i ++)
    {
        int x;
        cin >> x;
        while (x > 1)
        {
            int cnt = 0, y = p[x];
            while (x % y == 0)
            {
                x /= y;
                cnt ++;
            }
            if (cnt & 1)
            {
                h1.rev(y);
                h2.rev(y);
            }
        }
        ans += Map[pii(h1.cur, h2.cur)];
        Map[pii(h1.cur, h2.cur)] ++;
    }
    cout << ans;
}

int main()
{
    std::ios_base::sync_with_stdio(0); cin.tie(0);
    int test = 1;
    //cin >> test;
    while (test --)
    {
        Input();
        solve();
    }
    return 0;
}
