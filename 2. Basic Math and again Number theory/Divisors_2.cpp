/*
Author: Najmul Huda
Problem solve : 2025-09-21 09:06:26
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
int d[N+1];
bool ok[N+1];
void solve()
{   //find 1 to N divisors
    for(int i=1;i<=N;i++){
        for(int j=i;j<=N;j+=i)
        {
            d[j]++;
        }
    }
    for(int i=0;i<=N;i++) ok[i]=true;//initialized true
    for(int m=1;m<=N;m++){
        for(int n=m;n<=N;n+=m){
            if(d[n]%d[m]!=0) ok[n]=false;//if M divides N then d(M) divides d(N)
        }
    }
    vi ans;//d(N) > 3 and if M divides N then d(M) divides d(N) 
    for(int n=1;n<=N;n++){
        if(d[n]>3 and ok[n]) ans.push_back(n);
    }
    for(int i=107;i<ans.size();i+=108) cout<<ans[i]<<endl;

}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0); 
        solve();
    return 0;
}