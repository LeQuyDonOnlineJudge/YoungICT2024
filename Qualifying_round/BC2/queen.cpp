#include <bits/stdc++.h>
using namespace std;



int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int n , x , y , u , v;
        cin >> n >> x >> y >> u >> v;
        if(x == u || y == v) 
        {
            cout << "YES" <<'\n';
            continue;
        }

        int min_x = u - x;
        int min_y = v - y;
        if(abs(min_x) == abs(min_y))
        {
            cout << "YES" << '\n';
            continue;
        }
        cout << "NO" << '\n';
    }
    return 0;
}
