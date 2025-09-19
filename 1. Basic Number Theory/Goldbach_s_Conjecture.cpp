#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e7 + 9; 
vector<bool> is_prime(N, true);
vector<int> primes;

void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < N; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < N; j += i) {
                is_prime[j] = false;
            }
        }
    }
    for (int i = 2; i < N; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    int t;
    cin >> t;
    int cs = 0;
    while (t--) {
        int n;
        cin >> n;
        int ans = 0;
        for (auto a : primes) {
            if (a > n / 2) break; 
             int b = n - a;
            if (b >= a && b < N && is_prime[b]) {
                ans++;
            }
        }
        cout << "Case " << ++cs << ": " << ans << endl;
    }
    return 0;
}