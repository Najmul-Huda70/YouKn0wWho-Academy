/*
Author: Najmul Huda
Problem solve : 2025-09-25 07:54:51
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
const int mod = 1e9 + 7;
const ll  inf = 1e14;

void solve()
{   
    ll n; cin >> n; vl arr(n); for(int i=0;i<n;i++) cin>>arr[i];
    stable_sort(all(arr));

    ll ans=LLONG_MAX;
    ll cc=0;
    for(int c=1;;c++){
        vector<__int128> pw_c(n);
        pw_c[0]=1;
        for(int i=1;i<n;i++){
            pw_c[i]=pw_c[i-1]*c;
        }
        if(pw_c[n-1]>inf) break;
        ll sum=0;
        for(int i=0;i<n;i++){
            sum+=abs(arr[i]-(ll)pw_c[i]);
            if(sum>inf) break;
        }
        ans=min(ans,sum);
    }
    cout<<ans<<endl;

}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0); 
        solve();
    return 0;
}