#include<bits/stdc++.h>
using namespace std;
// int  GCD(int a,int b)
// {
//     //base case
//     if(a==0) return b;
//     if(b==0) return a;
//     if(a<b) swap(a,b);
// return GCD(a%b,b);
// }

int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
 int n;
 cin>>n;
long long gcd=0;
 for(int i=1;i<=n;i++)
 {
  long long  x;
  cin>>x;
  gcd=__gcd(gcd,x);
  }

 int cnt=0;
 for(int i=1;1LL *i*i<=gcd;i++)
 {
  if(gcd%i==0)
  {
    cnt++;
    if(i!=gcd/i)
    {
        cnt++;
    }
  }
 }
 cout<<cnt<<endl;
return 0;
}