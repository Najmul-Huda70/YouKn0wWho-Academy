#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        if (n <= 0)
        {
            cout << "0\n";
            continue;
        }
        vector<int> divs;
        vector<int> temp;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                divs.push_back(i);
                if (i != n / i)
                {
                    temp.push_back(n / i);
                }
            }
        }
        divs.insert(divs.end(), temp.rbegin(), temp.rend());
        int ans = 0;
        for (auto x : divs)
        {
            if (x > a)
            {
                continue;
            }
            for (auto y : divs)
            {
                if (y > b)
                {
                    continue;
                }
                if (n % (1LL * x * y) == 0)
                {
                    int z = n / (x * y);
                    if (z > c)
                    {
                        continue;
                    }
                    
                        ++ans;
                
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
