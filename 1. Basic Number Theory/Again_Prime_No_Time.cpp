/*
Author: Najmul Huda
Created: 2025-09-09 17:22:38
*/
#include <bits/stdc++.h>
using namespace std;
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define fr(i, a, b, increment) for (int i = a; i <= b; i += increment)
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
const int N = 1e4 + 9;
const int mod = 1e9 + 7, inf = 1e9;

//create some function
template <typename Najmul>
void print(const vector<Najmul> &ans);
vector<unordered_map<int,int>>p(N+1);
vector<unordered_map<int,int>>i_th_p(N+1);
int spf[N+1];
void sieve(){
    fr(i,0,N,1) spf[i]=i;
    fr(i,2,N,1){
        if(spf[i]==i){
            fr(j,i,N,i){
                if(spf[j]==j){
                    spf[j]=min(spf[j],i);
                }
            }
        }
    }
}
void built(){
    fr(i,2,N,1){
        unordered_map<int,int>mp;
        int temp=i;
        while(temp>1){
            int x =spf[temp];
            while(temp%x==0){
                mp[x]++;
                temp/=x;
            }
        }
        p[i]=mp;
    }
    i_th_p[2]=p[2];
    fr(i,3,N,1){
        unordered_map<int,int>mp;
        mp=i_th_p[i-1];
      for(auto [v,c]:p[i]){
        mp[v]+=c;
      }
      i_th_p[i]=mp;
    }
}
int cs=0;
void solve(){
    int m,n;
   cin>>m>>n;
   unordered_map<int,int>pm;
   int temp=m;
        while(temp>1){
            int x =spf[temp];
            while(temp%x==0){
                pm[x]++;
                temp/=x;
            }
        }
   cout<<"Case "<<++cs<<":"<<endl;
   int ans=INT_MAX;
   for(auto [v,c]:pm){
    // paile
    if(i_th_p[n][v]>0) 
                    ans=min(ans,i_th_p[n][v]/c);
    else {
        cout<<"Impossible to divide"<<endl;
        return;
    }
    }
    cout<<ans<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sieve();
    built();
    int T;
    cin >> T;
    while (T--)
    {
       solve();
   }
   
    return 0;
}
template <typename Najmul>
void print(const vector<Najmul> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}