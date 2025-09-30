/*
Author: Najmul Huda
Problem solve : 2025-09-26 18:43:35
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
  int n,m;
  cin>>n>>m;
  int previousPos=0,previousTime=0,ans=0;
  for(int i=1;i<=n;i++){
    int a,b; cin>>a>>b;
    int different =a-previousTime;
    // if(different%2==0) {
    //     if(b==previousPos) ans+=different;
    //     else ans+=different-1;
    // }
    // else{
    //     if(b==previousPos) ans+=different-1;
    //     else ans+=different;
    // }
    /*
    if different is even  {
    if(pos is same) ans+=different;
    else ans+=different-1;
    }
    else odd{
    if(pos is same ) ans+=difffent-1;
    else ans+=different;
    }
     */
    ans+= (different%2==1 ? (previousPos==b ? different-1:different):(previousPos==b ? different:different-1));
    previousPos=b;
    previousTime=a;
  }

  cout<<ans+(m-previousTime)<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0); 
    int t;cin>>t;while(t--)    solve();
    return 0;
}