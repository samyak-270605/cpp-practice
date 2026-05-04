// Input:-

// 5
// 5
// 1 2 3 2 1
// 7
// 5 4 1 1 1 1 3
// 6
// 1 2 3 4 5 6
// 6
// 4 1 6 3 2 6
// 7
// 1 3 2 7 2 3 1

// Output:-

// 8
// 12
// 0
// 10
// 18

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    ll sum = 0;
    for(auto &x : arr){
        cin>>x;
        sum += x;
    }

    vector<int> suf_mn(n);
    suf_mn[n-1] = arr[n-1];
    sum -= suf_mn[n-1];

    for(int i=n-2; i>=0; i--){
        suf_mn[i] = min(suf_mn[i+1], arr[i]);
        sum -= suf_mn[i];
    }

    ll mx = -1, cur = 1;
        for(int i = 1; i < n; i++) {
            if(suf_mn[i] == suf_mn[i - 1]) cur++;
            else {
                mx = max(mx, cur);
                cur = 1;
            }
        }

        mx = max(mx, cur);
        cout << sum + mx - 1 << endl;
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