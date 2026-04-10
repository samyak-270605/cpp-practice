// Input:-

// 7
// 4 3
// 0 1 2 0
// 8 4
// 0 1 2 3 1 2 0 1
// 9 5
// 1 0 1 3 4 3 2 1 0
// 15 14
// 3 0 1 2 3 4 5 6 7 8 9 10 11 12 13
// 5 5
// 4 3 0 1 2
// 5 2
// 0 1 1 1 0
// 3 2
// 0 1 1

// Output:-

// 2
// 0
// 1920
// 138007136
// 8
// 0
// 0


#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<ll> b(n);
        for(auto &x : b) cin>>x;
        ll mod = 676767677;

        map<ll,ll> f,fq;
        for(ll i : b) f[i]++;

        ll sum = 0;
        for(ll i=0; i<m; i++){
            sum += f[i];
            fq[i+1] = sum;
        }

        ll ans = 1;
        for(ll i=0; i<n; i++){
            if(b[i] == 0) continue;
            ll mn = INT_MAX;
            if(i-1 >=0) mn = min(mn,b[i-1]);
            if(i+1 < n) mn = min(mn,b[i+1]);
            
            if(mn >= b[i]){
                ans = 0;
                break;
            }

            if(mn == b[i]-1)
                ans = ans * fq[b[i]]%mod;
            else
                ans = ans * f[b[i]-1]%mod;
        }

        if(ans == 0) cout<<0<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}