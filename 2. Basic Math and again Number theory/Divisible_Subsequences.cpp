/*
Author: Najmul Huda
Problem solve : 2025-09-20 23:07:08
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
    ll d,n;
    cin>>d>>n;
    vl arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int prefSum[n+1];
    prefSum[0]=0;
    for(int i=1;i<=n;i++){
        prefSum[i]=(prefSum[i-1]+arr[i-1]%d)%d;
    }
    unordered_map<ll,int>cnt;
    ll ans=0;
    for(int i=0;i<=n;i++){
        ans+=cnt[prefSum[i]];
        cnt[prefSum[i]]++;
    }
    cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0); 
    int t;cin>>t;
    while(t--)
        solve();
    return 0;
}