/*
Author: Najmul Huda
Problem solve : 2025-09-20 12:24:01
*/
#include <bits/stdc++.h>
using namespace std;

#define SET(arr, a) memset(arr, a, sizeof(arr))
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define condition(flag) cout << (flag ? "YES" : "NO") << endl;
#define all(arr) arr.begin(), arr.end()

using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N = 1e6 + 9;
const int mod = 1e9 + 7, inf = 1e9;

void solve()
{   
    ll n; cin >> n;
    ll ans_a=LLONG_MAX,ans_b=LLONG_MAX;
    for(ll i=1;1LL*i*i<=n;i++){
        if(n%i==0)
        {
            ll a=i,b=n/i;
            if(__gcd(a,b)==1){
                if(max(a,b)<max(ans_a,ans_b))
            {
                ans_a=a;
                ans_b=b;
            }
            }
        }
    }
    cout<<ans_a<<" "<<ans_b<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0); 
        solve();
    return 0;
}