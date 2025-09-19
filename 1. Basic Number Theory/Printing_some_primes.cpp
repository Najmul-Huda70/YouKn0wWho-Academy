/*
Author: Najmul Huda
Created: 2025-09-09 15:32:55
*/
#include <bits/stdc++.h>
using namespace std;
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define fr(i, a, b, increment) for (int i = a; i <= b; i += increment)
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
const int N = 1e8;
const int mod = 1e9 + 7, inf = 1e9;

//create some function
template <typename Najmul>
void print(const vector<Najmul> &ans);
void solve()
{  vb is_prime(N+1,true);
    vi primes;
    is_prime[0]=is_prime[1]=false;
    for(ll i=2;i*i<=N;i++){
        if(is_prime[i]){
            for(ll j=i*i;j<=N;j+=i){
                is_prime[j]=false;
            }
        }
    }
   fr(i,0,N-1,1) if(is_prime[i]) primes.push_back(i);
fr(i,0,primes.size()-1,100){
    cout<<primes[i]<<endl;
}
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
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