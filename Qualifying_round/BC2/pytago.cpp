#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n ;
    cin >> n ;
    vector<int>cnt(1001 , 0);
    vector<int>dict(1001 * 1001  * 2, 0);
    for(int i =1 ; i <= n ; i++)
    {

        int x;
        cin >> x;
        cnt[x]++;
        dict[x * x]++;
    }

    long long ans = 0;

    for(int i =1 ; i<= 1000 ; i++)
    {
        for(int j = i+1 ; j <= 1000 ; j++)
        {
            ans += cnt[i] *1LL * cnt[j] *1LL *  dict[i * i + j * j];
        }
    }

    cout << ans;
    return 0;
}
