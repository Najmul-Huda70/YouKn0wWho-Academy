#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+9;
ll Multiple_under_n(ll k,ll n)// count  k er multiple value n porjonto
{
    return n/k;
}
ll solve(ll k,ll l,ll r)
{
return Multiple_under_n(k,r)-Multiple_under_n(k,l-1);
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
 ll n,m,l,r;
 cin>>n>>m>>l>>r;
 ll g=__gcd(n,m);
 if( n/g> r/m) {cout<<0<<endl;return 0;}
ll lcm=(n/g)*m;
 cout<<solve(lcm,l,r)<<endl;
return 0;
}