/*
Author: Najmul Huda
Problem solve : 2025-09-21 21:14:32
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
const int N = 2e9 + 9;
const int mod = 1e9 + 7, inf = 1e9;
bool isPrimes(ll n){
    for(ll i=2;i*i<=n;i++){
        if((n%i==0)) return false;
    }
    return true;
}
void solve()
{  
    ll n;cin>>n;
    cout<<(isPrimes(n) ? 1:(((n&1)==0 or isPrimes(n-2)) ? 2:3))<<endl;  
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0); 
    solve();
    return 0;
}