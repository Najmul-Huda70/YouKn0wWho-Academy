/*
Author: Najmul Huda
Created: 2025-09-09 16:08:56
*/
#include <bits/stdc++.h>
using namespace std;
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define fr(i, a, b, increment) for (ll i = a; i <= b; i += increment)
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

//create some function
template <typename Najmul>
void print(const vector<Najmul> &ans);
int spf[N+1];
void sieve(){
    fr(i,0,N,1) spf[i]=i;
    fr(i,2,N,1){
        if(spf[i]==i){
            fr(j,i,N,i){
                if(spf[j]==j) spf[j]=min(1LL*spf[j],i);
            }
        }
    }
}
void solve()
{  
    ll n;
    while(1){
         cin>>n;
         if(n==0) return;
        int cnt=0;
        while(n>1){
            int x=spf[n];
            cnt++;
            while(n%x==0) n/=x;
        }
        cout<<cnt<<endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
        sieve();
        solve();
    return 0;
}
template <typename Najmul>
void print(const vector<Najmul> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}