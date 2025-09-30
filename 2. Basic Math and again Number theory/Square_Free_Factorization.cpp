/*
Author: Najmul Huda
Problem solve : 2025-09-21 08:54:11
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
            for(int j=i+i;j<N;j+=i){
                if(spf[j]==j) spf[j]=i;
            }
        }
    }
}
void solve()
{   
    int n; cin >> n;
    int ans=INT_MIN;
    while(n>1){
       int x =spf[n];
       int e=0;
       while(n%x==0) n/=x,e++;
       ans=max(ans,e); 
    }
    cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0); 
    sieve();
    int t;cin>>t;while(t--)    solve();
    return 0;
}