/*
Author: Najmul Huda
Problem solve : 2025-09-21 09:41:01
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
const int N = 1e5 + 9;
const int mod = 1e9 + 7, inf = 1e9;
int spf[N];
int divisorsCnt[N];
void sieve(){
    for(ll i=0;i<N;i++) spf[i]=i;
    for(ll i=2;i<N;i++){
        if(spf[i]==i){
            for(ll j=i;j<N;j+=i){
                if(spf[j]==j) spf[j]=i;
            }
        }
    }
}
vector<ll>divCnt[10000];
void built(){
    divisorsCnt[0]=0;
    for(int i=1;i<N;i++){
        int a=i,divisors_cnt=1;
        while(a>1){
            int x=spf[a],e=0;
            while(a%x==0) a/=x,e++;
            divisors_cnt*=(2*e+1);
        } 
        divCnt[divisors_cnt].push_back(i*1LL*i);
    }
}
void solve()
{   
    int n;
    ll l,h;
    cin >> n>>l>>h;
    int ans=upper_bound(all(divCnt[n]),h) - lower_bound(all(divCnt[n]),l);
    // for(int i=0;i<divCnt[n].size();i++){
    //     if(divCnt[n][i]>=l and divCnt[n][i]<=h) ans++;
    // }
  
    cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0); 
    sieve();
    built();
    int c;cin>>c;while(c--)    solve();
    return 0;
}