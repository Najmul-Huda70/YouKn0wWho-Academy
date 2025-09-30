/*
Author: Najmul Huda
Problem solve : 2025-09-20 11:25:32
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

void solve()
{   
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Case "<<i<<": ";
        unordered_map<string,int> mp={{"January",1},{"February",2},{"March",3},{"April",4},
    {"May",5},{"June",6},{"July",7},{"August",8},{"September",9},{"October",10},{"November",11},{"December",12}};
    string month1;int day1,year1;char ignore1;
    cin>>month1>>day1>>ignore1>>year1;
    string month2;int day2,year2;char ignore2;
    cin>>month2>>day2>>ignore2>>year2;
    // cout<<month1<<" "<<day1<<ignore1<<" "<<year1<<endl;
    // cout<<month2<<" "<<day2<<ignore2<<" "<<year2<<endl;
    if(mp[month1]>2)year1++;
    if(mp[month2]<2 or (mp[month2]==2 and day2<29)) year2--;
    while(year1<=year2 and !((year1%400==0) or (year1%4==0 and year1%100!=0))) year1++;
   if(year1>year2) cout<<0<<endl;
   else cout<<abs(year2-year1)/4+1<<endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0); 
        solve();
    return 0;
}