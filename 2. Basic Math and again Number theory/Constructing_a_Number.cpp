/*
Author: Najmul Huda
Problem solve : 2025-09-20 10:55:50
*/
#include <bits/stdc++.h>
using namespace std;

#define SET(arr, a) memset(arr, a, sizeof(arr))
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define condition(flag) cout << (flag ? "Yes" : "No") << endl;
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
    ll n; cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     int sum=0;
    for(int i=0;i<n;i++){
        int val=arr[i];
        while(val){
            sum+=(val%10)%3;
            sum%=3;
            val/=10;
        }
    }
    condition(sum==0);
    
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