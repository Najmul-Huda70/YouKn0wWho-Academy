/*
Author: Najmul Huda
Problem solve : 2025-09-21 14:44:38
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
int freq[N];
void solve()
{   
    ll n; cin >> n; vl arr(n); for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
        freq[arr[i]]++;
    }
   int ans=INT_MIN;
    for(int g=2;g<N;g++){
    int cnt=0;
    for(int i=g;i<N;i+=g){
         cnt+=freq[i];
    }
    ans=max(ans,cnt);
   }
   if(ans==0) cout<<1<<endl;
   else cout<<ans<<endl;
   //cout<<(ans==1 ? 0:ans)<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0); 
        solve();
    return 0;
}