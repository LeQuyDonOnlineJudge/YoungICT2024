#include <bits/stdc++.h>
using namespace std;

const int MODULO = 1e9+7;

void add(int &x , int d)
{
    x += d;
    if(x >= MODULO ) x -= MODULO;
}

void sub(int &x , int d)
{
    x -= d;
    if(x < 0 ) x += MODULO;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s;
    string t;
    cin >> s >> t;

    int n = (int)s.size();
    int m = (int)t.size();
    s = " " + s;
    t = " " + t;
    vector<vector<int>>dp(2 , vector<int>(m+1 , 0));

    for(int i = 1; i <= n ; i++)
    {
        int state = i % 2 ;
        for(int j = 1; j <= m ; j++)
        {
            dp[state][j] =  dp[state ^1][j] ;
            add(dp[state][j] , dp[state][j-1]);
            sub(dp[state][j] , dp[state^1][j-1]);
            if(t[j] == s[i])
            {
                add(dp[state][j], dp[state ^ 1][j-1]);
                add(dp[state][j] , 1);
            }
        }
    }
    cout << dp[n % 2][m];
    return 0;
}
