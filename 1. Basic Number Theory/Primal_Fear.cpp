#include<bits/stdc++.h>
using namespace std;
const int N=1e6+9;
vector<bool> is_prime(N,true);
void sieve()
{
    is_prime[0]=is_prime[1]=false;
    for(int i=2;i<N;i++)
    {
     if(is_prime[i])
     {
        for(int j=i+i;j<N;j+=i)
     {
        is_prime[j]=false;
     }
     }
     }
}
bool has_digit_0(int x)
{
   while(x)
   {
    if(x%10==0) return true;
     x/=10;
   }
   return false;
}
bool is_valid(int x)
{
    if(!is_prime[x]) return false;
    if(has_digit_0(x)) return false;
     string s=to_string(x);
    for(int i=0;i<s.size();i++)
    {
      string suffix=s.substr(i);
      int suffix_int=stoi(suffix);
      if(!is_prime[suffix_int])
      {
          return false;
      }
      
    }
    return true;
}
int cnt_valid_in_prefix[N];
bool valid[N];
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
sieve();
 for(int i=1;i<N;i++)
 {
  valid[i]= is_valid(i);
  }
 for(int i=1;i<N;i++)
 {
    cnt_valid_in_prefix[i]=cnt_valid_in_prefix[i-1]+valid[i];
 }
 int t;
 cin>>t;
 while(t--)
 {
    int x;
    cin>>x;
    cout<<cnt_valid_in_prefix[x]<<endl;
 }
return 0;
}