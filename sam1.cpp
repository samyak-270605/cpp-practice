// 2222B
// Input:-

// 6
// 7 4
// 1 2 3 4 5 6 7
// 1 2 3 4
// 7 4
// 1 -2 3 4 -5 -6 -7
// 7 6 5 4
// 7 5
// 21 -45 234 -8 423 12 -987
// 6 6 6 6 6
// 7 5
// -21 45 -234 8 -423 -12 987
// 7 7 7 7 7
// 7 3
// -1 2 -3 4 5 6 7
// 1 2 3
// 7 3
// -1 -2 -3 -4 -5 -6 -7
// 1 2 3

// Output:-

// 6
// -20
// -362
// -637
// 2
// -25

#include<bits/stdc++.h>     
using namespace std;
using ll = long long;

void solve() {
    ll n,m;
    cin>>n>>m;
    vector<ll> odd,even;
    ll sum = 0;
    for(auto i=1; i<=n; i++){
        ll el;
        cin>>el;
        if(i%2 == 1) odd.push_back(el);
        else even.push_back(el);
        sum += el;
    }

    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());

    ll o = (ll)odd.size() - 1;
    ll e = (ll)even.size() - 1;

    vector<ll> queries(m);
    for(auto &x : queries) cin>>x;

    for(auto q : queries){
        // odd query
        if(q % 2 == 1){
            if(o < 0) continue;
            if(odd[o] >= 0 || o == odd.size() - 1) sum -= odd[o--];
        }
        // even query
        else{
            if(e < 0) continue;
            if(even[e] >= 0 || e == even.size() - 1) sum -= even[e--];
        }
    }

    cout<<sum<<endl;

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