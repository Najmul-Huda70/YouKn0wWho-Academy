/*
Author: Najmul Huda
Problem solve : 2025-09-20 21:05:46
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
int cs=0;
void solve()
{   
    int n,d;
    cin>>n>>d;
    int ans=0;
    int cur=0;
    do{
        cur=(cur*10LL%n + d)%n;
        ans++;
    }while(cur!=0);
    cout<<"Case "<<++cs<<": "<<ans<<endl;
    
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0); 
    int t;cin>>t;
        while(t--){
            solve();
        }
    return 0;
}