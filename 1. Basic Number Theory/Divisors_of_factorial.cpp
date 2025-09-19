
#include <bits/stdc++.h>
using namespace std;
const int N = 5e4 + 9, mod = 1e9 + 7;
int spf[N];
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 2; i < N; i++)
    {
        spf[i] = i;
    }
    for (int i = 2; i < N; i++)
    {
        if(spf[i]==i)
        {
            for (int j = i; j < N; j += i)
        {
            spf[j] = min(spf[j], i);
        }
        }
    }
    int q;
    cin >> q;

    while (q--)
    {
        int n;
        cin >> n;
        int number_of_divisors = 1;
        vector<int> cnt(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            int x = i;
           
            while (x>1)

            {
                    int k = spf[x];
                while(x%k==0)

               {cnt[k]++;
                x /= k;}
            }
        }

        for (auto e : cnt)
        {
            number_of_divisors = 1LL  *number_of_divisors* (e + 1) % mod;
        }
        cout << number_of_divisors<< endl;
    }

    return 0;
}