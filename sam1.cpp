// 2230C
// Input:-

// 11
// 4
// 1 1 1 3
// 3
// 2 3 4
// 6
// 1 1 1 1 3 4
// 3
// 1000000000 1000000000 1000000000
// 3
// 1 1 2
// 1
// 2
// 2
// 2 2
// 3
// 1 1 1
// 4
// 1 1 2 2
// 3
// 1 1 4
// 9
// 1 1 1 1 1 1 1 1 7

// Output:-

// 4
// 9
// 8
// 3000000000
// 3
// 0
// 4
// 0
// 4
// 6
// 10

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(auto& x : arr) cin>>x;
    sort(arr.rbegin(), arr.rend());
    ll ex = 0;
    bool exx = false;
    if(n > 1 && arr[1] == 1 && arr[0] >= 2) exx = true;

    ll ans = 0;
    for(auto i : arr){
        if(i == 1){
            if(ex > 0){
                ex--;
                ans++;
            }
            else if(exx){
                exx = false;
                ans++;
            }
        }

        else{
            ans += i;
            if(i < 4) continue;

            ex += 1 + (i-4)/2;
        }
    }

    if(ans < 3) ans = 0;
    cout<<ans<<endl;
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