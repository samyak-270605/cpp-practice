// Input:-

// 5
// 1 1 1
// 2 0 0
// 1 1 0
// 0 0 1000000000
// 1000000000 1000000000 1000000000

// Output:-

// 7
// 5
// 5
// 3000000000
// 7000000000

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll t,h,u;
    cin>>t>>h>>u;
    ll res = 0;
    
    // 1. Greedily pair T and U (most efficient combination)
    ll pairs = min(t, u);
    res += pairs * 4;
    t -= pairs;
    u -= pairs;
    
    // 2. Process whatever is left
    if (u > 0) {
        // U's cannot interlock with H's. Both just take 3 rows each.
        res += u * 3;
        res += h * 3;
    } else {
        // We only have T's and H's left
        if (t <= 2 * h) {
            // All T's can interlock into the H's (no overhead)
            res += 2 * t + 3 * h;
        } else {
            // We have more T's than H gaps, triggering a T-chain overhead (+1)
            res += 2 * t + 3 * h + 1;
        }
    }

    cout<<res<<endl;
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