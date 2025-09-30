/*
Author: Najmul Huda
Problem solve : 2025-09-26 15:22:32
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
ll lcm(int a,int b) {
    return 1LL*a*b/(__gcd(a,b));
}
void solve()
{   
    int n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    int R = n/a;
    int B =n/b;
    int RB =n/lcm(a,b);
    cout<<max(R*1LL*p + 1LL*(B-RB)*q,(R-RB)*1LL*p + 1LL*B*q)<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0); 
        solve();
    return 0;
}