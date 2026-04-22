// Input:-

// 5
// 5 5
// 8 1
// 15 8
// 10 10
// 5989566119 1996588700

// Output:-

// 1
// 2
// 10
// 0
// 99996

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

// Function to count how many times P(k) = 0 occurs in range [0, K]
// Pattern: 0, 3, 7, 11, 15...
ll count_Z(ll K) {
    if (K < 0) return 0;
    if (K < 3) return 1; // Only index 0
    return 2 + (K - 3) / 4; 
}

// Function to count how many times P(k) = 1 occurs in range [0, K]
// Pattern: 1, 5, 9, 13, 17...
ll count_O(ll K) {
    if (K < 1) return 0;
    return 1 + (K - 1) / 4;
}

void solve() {
    ll n, x;
    cin >> n >> x;
    ll mod = 998244353;

    // 1. Calculate combinations for matching '0's
    ll z_left = count_Z(x - 1);           // Valid L-1 options
    ll z_total = count_Z(n);
    ll z_right = z_total - z_left;        // Valid R options
    
    // 2. Calculate combinations for matching '1's
    ll o_left = count_O(x - 1);           // Valid L-1 options
    ll o_total = count_O(n);
    ll o_right = o_total - o_left;        // Valid R options

    // Modulo arithmetic to avoid overflow
    z_left %= mod; z_right %= mod;
    o_left %= mod; o_right %= mod;

    ll ans_z = (z_left * z_right) % mod;
    ll ans_o = (o_left * o_right) % mod;

    // Total valid subarrays
    ll ans = (ans_z + ans_o) % mod;
    cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }

    return 0;
}