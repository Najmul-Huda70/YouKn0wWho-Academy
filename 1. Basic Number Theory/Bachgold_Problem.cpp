#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
cin>>n;
cout<<n/2<<endl;
for(int i=1;i<n/2;i++)
{
 cout<<2<<" ";
 }
 if(n%2==0) cout<<2<<endl;
 else cout<<3<<endl;
return 0;
}