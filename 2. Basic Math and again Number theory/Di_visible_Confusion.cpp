/*
Author: Najmul Huda
Problem solve : 2025-09-22 23:17:35
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
    int n; cin >> n; int arr[n+1]; for(int i=1;i<=n;i++) cin>>arr[i];//1-indexing
    for(int i=1;i<=min(n,21);i++){
        bool all_div=true;
        for(int div=2;div<=(i+1);div++){
            if(arr[i]%div!=0){
            all_div=false;
        }
        }
         if(all_div){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0); 
    int t;cin>>t;while(t--)    solve();
    return 0;
}