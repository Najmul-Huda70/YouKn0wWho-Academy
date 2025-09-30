/*
Author: Najmul Huda
Problem solve : 2025-09-26 15:01:58
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
    int x,y;
    cin>>x>>y;
    double xy_digit=y*log(x);
    double yx_digit=x*log(y);

    if(xy_digit==yx_digit) cout<<'='<<endl;
    else if(xy_digit<yx_digit) cout<<'<'<<endl;
    else cout<<'>'<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0); 
        solve();
    return 0;
}