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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        ll n,x;
        cin>>n>>x;
        ll mod = 998244353;
        vector<ll> arr(n);
        iota(arr.begin(), arr.end(), 1);
        vector<vector<ll>> dp(n, vector<ll>(n,0));
        
    }

    return 0;
}