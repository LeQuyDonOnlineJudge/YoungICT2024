#include <bits/stdc++.h>
using namespace std;



long long calc(long long p , long long n)
{
    long long q = n / p;
    return (q-1 ) * (q) /2LL * p + (n % p) * q;
}


int main()
{
    ios_base :: sync_with_stdio(0);cin.tie(0);
    int n ;
    long long ans = 0;
    cin >> n;
    long long p = 5;
    while(p <= n)
    {
        ans += calc(p , n + 1);
        p *= 5;
    }
    cout << ans;
    return 0;
}
