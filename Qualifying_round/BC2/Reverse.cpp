#include <bits/stdc++.h>
#define foreach for
#define in :
using namespace std;
typedef   long long ll;
int   MODULO = 200401501 ;
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
const int N = 5e5+1;
int n  ;


void Input()
{
    cin >> n;
}

void Process()
{
    map<string , int>dict;

    long long ans = 0;
    for(int i = 1 ; i <= n ; i++)
    {
        string x;
        cin >> x;
        string t = x;
        reverse(t.begin(), t.end());
        ans += dict[t];
        dict[x]++;
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
