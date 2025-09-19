
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+9;
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
 ll n;
 cin>>n;
 ll x=sqrtl(n);
 while(x*x<n) ++x;
 while(x*x>n) --x;
 assert(x*x==n);
int ans=INT_MIN;
 for(int p=2;p*p<=x;p++)
 {
    if(x%p==0)
    {
    ans= max(ans,p);
  while(x%p==0)
    {
        x/=p;
    }
    }
 
}
if(x>1)
{
    ans=max(ans,(int)x);
}
 cout<<ans<<endl;
return 0;
}