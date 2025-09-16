/*
Author: Najmul Huda
Problem solve : 2025-09-16 18:11:48
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
const int N = 1e6 + 9;
const int mod = 1e9 + 7, inf = 1e9;

//data type + Global variable
vb is_prime(N+1,true);//check value prime ? true:false
vi spf(N+1);//smallest prime factorization
vi primes;//all prime number array

//create some function
template <typename Najmul>
void print(const vector<Najmul> &ans);
void sieve();//Sieve of Eratosthenes T.C = O(NlogN) S.C = O(N)
vl divisors(ll a);
bool isPrime(ll n);
unordered_map<ll,ll> prime_factorization(ll n);
bool divisibility(string a,int b);// a divisible b ? true : false;
ll lcm(ll a,ll b) {return (a*1LL*b)/(ll)__gcd(a,b);}// lcm find a,b
void solve()
{  
    int n; cin >> n; vi arr(n); fr(i,0,n-1,1) cin>>arr[i];
    
    
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
template <typename Najmul>
void print(const vector<Najmul> &ans)//print
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}
void sieve()//Sieve of Eratosthenes T.C = O(NlogN) S.C = O(N)
{
    fr(i,0,N,1) spf[i]=i;
    is_prime[0]=is_prime[1]=false;
    fr(i,2,N,1){
        if(spf[i]==i){
            fr(j,i*i,N,i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
    fr(i,2,N,1){
        if(is_prime[i]){
            fr(j,i*i,N,i){
                if(is_prime[j]){
                    is_prime[j]=false;
                }
            }
        }
    }
    fr(i,2,N,1) {
        if(is_prime[i]){
            primes.push_back(i);
        }
    }

}
vl divisors(ll a)//T.C = O(√a + k log k)
{
    vl div;
    for(ll i=1;1LL*i*i<=a;i++){
        if(a%i==0){
            div.push_back(i);
            if(a/i != i) div.push_back(a/i);
        }
    }
    sort(all(div));//O(k log k) where k = number of divisors
    return div;
}
bool isPrime(ll n)// T.C = O(√n)
{
    for(ll i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
unordered_map<ll,ll> prime_factorization(ll n)//T.C = S.C = O(logn)
{
    unordered_map<ll,ll>mp;
    while(n>1){
        ll x =spf[n];
        while(n%x==0){
            n/=x;
            mp[x]++;
        } 
    }
    return mp;
}
bool divisibility(string a,int b) //T.C = O(a.size()) S.C =O(1)
{
    int ans=0;
    fr(i,0,a.size(),1){
        ans=(ans*10LL%b + (a[i]-'0'))%b;
    }
    return ans==0;
}
