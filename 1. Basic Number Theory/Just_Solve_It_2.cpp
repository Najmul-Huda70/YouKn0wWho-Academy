#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e6 + 9;


/*

 Modular Multiplication Function

This function computes the product of a and b modulo mod.
 It uses __int128 to avoid overflow during the multiplication of large numbers.
  The expression __int128(a) * b ensures that the multiplication is performed with a 128-bit integer,
 which can handle very large numbers, and then takes the result modulo mod.
 
 */
ll mul(ll a, ll b, ll mod) {
    return __int128(a)*b % mod;
}

/*
Modular Exponentiation Function

=> This function computes a^b mod mod using the method of modular exponentiation. 
This method is efficient for large exponents.

=> It uses a technique called Exponentiation by Squaring:
..............................................................
*/
ll power(ll a, ll b, ll mod) {
    ll ans = 1;
    a %= mod;      //a %= mod; ensures that a is reduced modulo mod at the beginning.
    while (b > 0) {
        if (b & 1) {   //If b is odd (b & 1)
            ans = mul(ans, a, mod); // it multiplies ans by a modulo mod.
        }
        a = mul(a, a, mod); // Squares a and reduces it modulo mod.
        b >>= 1;    // b >>= 1; divides b by 2 (right shift operation).
    }
    return ans;
}

// Function to calculate modular inverse using Fermat's Little Theorem
ll inverse(ll a, ll mod) {
    return power(a, mod - 2, mod);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll a, b, mod;
    cin >> a >> b >> mod;

    if (mod <= 1) {
        return 1;
    }

    cout << power(a, b, mod) << endl;
    cout << mul(a, b, mod) << endl;
    cout << mul(a, inverse(b, mod), mod) << endl;

    return 0;
}
