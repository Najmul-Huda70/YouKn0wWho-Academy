#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+9;
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
 int t;cin>>t;
 while(t--)
 {
  ll a,b;
  cin>>a>>b;
  while(true)
  { ll g=__gcd(a,b);
    if(g==1) break;
    b/=g;
  }
 if(b==1)
 {
    cout<<"Yes"<<endl;
 }
 else cout<<"No"<<endl;
 }
return 0;
}