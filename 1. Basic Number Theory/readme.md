# Basic Number Theory


//data type + Global variable
vb is_prime(N+1,true);//check value prime ? true:false
vi spf(N+1);//smallest prime factorization
vi primes;//all prime number array

void sieve()//Sieve of Eratosthenes T.C = O(NlogN) S.C = O(N)
{
    fr(i,0,N,1) spf[i]=i;
    is_prime[0]=is_prime[1]=false;
    fr(i,2,N,1){
        if(spf[i]==i){
            fr(j,i*i,N,i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
    fr(i,2,N,1){
        if(is_prime[i]){
            fr(j,i*i,N,i){
                if(is_prime[j]){
                    is_prime[j]=false;
                }
            }
        }
    }
    fr(i,2,N,1) {
        if(is_prime[i]){
            primes.push_back(i);
        }
    }

}
vl divisors(ll a)//T.C = O(√a + k log k)
{
    vl div;
    for(ll i=1;1LL*i*i<=a;i++){
        if(a%i==0){
            div.push_back(i);
            if(a/i != i) div.push_back(a/i);
        }
    }
    sort(all(div));
    return div;
}
bool isPrime(ll n){
    for(ll i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
unordered_map<ll,ll> prime_factorization(ll n){
    unordered_map<ll,ll>mp;
    while(n>1){
        ll x =spf[n];
        while(n%x==0){
            n/=x;
            mp[x]++;
        } 
    }
    return mp;
}
