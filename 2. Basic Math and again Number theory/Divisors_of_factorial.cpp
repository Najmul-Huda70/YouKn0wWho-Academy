/*
Author: Najmul Huda
Problem solve : 2025-09-21 13:31:19
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
int spf[N];
void sieve(){
    for(int i=0;i<N;i++) spf[i]=i;
    for(int i=2;i<N;i++){
        if(spf[i]==i){
            for(int j=i;j<N;j+=i){
                if(spf[j]==j) spf[j]=i;
            }
        }
    }
}
void solve()
{   
    int n; cin >> n; 
    vi divisorsCnt(n+1,0);
    for(int i=1;i<=n;i++)
    {
        int p = i;
        while(p>1){
            int x =spf[p];
            while(p%x==0){
                p/=x;
                divisorsCnt[x]++;
            }
        }
    }
    int ans=1;
    for(auto e:divisorsCnt) ans=ans*1LL*(e+1)%mod;
    cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0); 
    sieve();
     int t;cin>>t; while(t--) {solve();}
    return 0;
}