//2208C
// Input:-

// 2
// 2
// 10 0
// 20 5
// 3
// 10 5
// 10 80
// 20 5

// Output:-

// 30.0000000000
// 29.0000000000

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;

    vector<int> c(n), p(n);

    for(int i=0;i<n;i++)
        cin >> c[i] >> p[i];

    vector<double> dp (n+1,0.0);
    for(int i=n-1; i>=0; i--){
        double skip = dp[i+1];
        double take = c[i] + (1.0 - p[i]/100.0)*dp[i+1];
        dp[i] = max(skip,take);
    }
    
    cout<< fixed << setprecision(10) << dp[0] <<endl;
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