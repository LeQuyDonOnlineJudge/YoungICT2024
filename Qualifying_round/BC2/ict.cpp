#include <bits/stdc++.h>
#define foreach for
#define in :
using namespace std;
typedef   long long ll;
int   MODULO =1e9+7 ;
const int INF = 1e9+7;
const unsigned long long  LIMIT = 2e18;

template<class X , class Y>
    bool Minimize(X & x , Y y)
    {
        if( x > y )
        {
            x = y;
            return true;
        }
        return false;
    }

template<class X , class Y>
    bool Maximize(X & x , Y y)
    {
        if( x < y)
        {
            x = y;
            return true;
        }
        return false;
    }
template<class X , class Y>
    void Add(X &x , Y y )
    {
        x += y;
        if(x >= MODULO)
        {
            x -= MODULO;
        }
    }
template<class X , class Y>
    void Sub(X &x ,Y y)
    {
        x -=  y;
        if(x < 0)
        {
            x += MODULO;
        }
    }
template<class X , class Y>
    bool Check_MUL(X x , Y y )
    {
        return x > LIMIT/y;
    }

/* End of templates. Let's see what do we have here */
const int N = 1e5+1;
int n ;
string s;
void Input()
{
    cin >> n ;
    cin >> s;
}

void Process()
{
    s = " " + s;
    int ans = 0;
    int cnt = 0;
    for(int l  = 1 ; l <= n ; l++)
    {
            if(s[l] == 'i' || s[l] == 'c' || s[l] == 't')
            {    
                ans = max(ans , ++cnt);
                continue;
            }
            cnt = 0;
    }
    cout << ans;
}





int main()
{
    ios_base :: sync_with_stdio(0);cin.tie(0);
    int test;
    test = 1;
    while(test--)
    {
        Input();
        Process();
        cout <<'\n';
    }
    return 0;
}

//Ehem. My code is amazing. Pay me 2$.Thank you.
