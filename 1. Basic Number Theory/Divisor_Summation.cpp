#include<bits/stdc++.h>
using namespace std;
const int N=5e5;
long long  sum_proper_prime[N];
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
 for(int i=1;i<N;i++)
 {
    for(int j=i;j<N;j+=i)

    {
        sum_proper_prime[j]+=i;
    }
 }
 int t;
 cin>>t;
 while(t--)
 {
    int x;
    cin >>x;
    cout<<sum_proper_prime[x]-x<<endl;
 }
return 0;
}