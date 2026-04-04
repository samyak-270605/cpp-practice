// Input:-

// 2
// 3
// 5
// 10000

// Output:-

// 1 6 2
// 134 67 69 207 414


// Input:-

// 2
// 3
// 5
// 10000

// Output:-

// 1 6 2
// 134 67 69 207 414


#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Precompute primes up to ~105000 (need ~10001 primes)
    vector<int> primes;
    vector<bool> sieve(105000, true);
    for(int i = 2; i < 105000 && primes.size() <= 10001; i++){
        if(sieve[i]){
            primes.push_back(i);
            for(int j = 2*i; j < 105000; j += i) sieve[j] = false;
        }
    }
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        // a[i] = prime[i] * prime[i+1]
        // gcd(a[i], a[i+1]) = prime[i+1], all distinct
        for(int i = 0; i < n; i++){
            cout << (ll)primes[i] * primes[i+1];
            if(i < n-1) cout << " ";
        }
        cout << "\n";
    }
    return 0;
}