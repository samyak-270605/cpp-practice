// Input:-

// 7
// 10 2
// 1 2 1 2 1 2 1 2 1 2
// 5 10
// 2 2 2 2 5
// 11 23
// 5 5 22 1 21 2 10 3 1 1 2
// 1 1
// 1
// 1 17
// 11
// 3 100
// 44 32 1
// 16 100500
// 42801 73112 95296 68791 42217 21871 29316 84405 24273 42894 63370 53473 57156 61369 80 27290

// Output:-

// 12
// 1 2 2 2 2 2 1 1 1 1
// 5
// 2 2 2 2 5
// 53
// 1 1 5 2 1 2 5 3 10 21 22
// 1
// 1
// 0
// 11
// 0
// 44 32 1
// 503499
// 53473 42894 80 57156 42801 61369 42217 63370 29316 68791 27290 73112 24273 84405 21871 95296

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n,X;
    cin>>n>>X;
    
    multiset<ll> st;
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        st.insert(x);
    }

    ll S = 0;
    ll bonus = 0;
    vector<ll> res;

    ll next = X;

    while(!st.empty()){

        ll need = next - S;

        // check if ANY element can cross
        auto it = st.lower_bound(need);

        if(it != st.end()){
            // choose LARGEST element instead
            auto it2 = prev(st.end());

            ll val = *it2;

            res.push_back(val);
            bonus += val;
            S += val;

            st.erase(it2);

            next += X;
        }
        else{
            // build sum with smallest
            auto it2 = st.begin();

            ll val = *it2;

            res.push_back(val);
            S += val;

            st.erase(it2);
        }
    }

    cout << bonus << "\n";
    for(ll v : res) cout << v << " ";
    cout << "\n";
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