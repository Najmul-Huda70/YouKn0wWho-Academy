#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+9;
bool is_prime(int n)
{
    for(int i=2;i<n;i++)
    {
     if(n%i==0) return false;
     }
     return true;
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
for(int i=1;i<=t;i++)
{
 int n;
 cin>>n;
 cout<<"Case "<<i<<": "<<n<<" = ";
 for(int j=2;j<=n;j++)
 {       
    if(is_prime(j))
    {   
         int power_of_j=1;
        for(int k=j+j;k<=n;k+=j)
        {  int x=k;
         while(x%j==0)
         {    
             power_of_j++;
            x/=j;
           
         }   
        }
        if(j!=2) cout<<"* ";
        cout<<j<<" ("<<power_of_j<<") ";
    }
    
 }
 cout<<endl;
}
return 0;
}