// Input:-

// 6
// 1 1
// 3 3 3
// 1 7
// 4 2 5
// 2 4
// 1 2 3
// 2 2 4
// 5 8
// 12 1 11
// 10 1 4
// 1 1 3
// 1 2 5
// 2 1 7
// 1 1000000000000000000
// 1000000 4 654321
// 1 10
// 2 2 1

// Output:-

// 0
// 1
// -1
// 2
// 298892990032
// 3

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
            vector<ll> a(n),b(n),c(n);
            for(ll i=0; i<n; i++) cin>>a[i]>>b[i]>>c[i];

            ll start = 0;
            ll mx = LLONG_MIN;
            for(ll i=0; i<n; i++){
                mx = max(mx,a[i] * b[i] - c[i]);
                start += a[i] * (b[i] - 1);
            }

            x -= start;
            if(x <= 0) cout<<0;
            else if(mx <= 0) cout<<-1;
            else cout<<(x + mx - 1) / mx;
            cout<<'\n';
        }
    return 0;
}