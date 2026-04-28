// Input:-

// 3
// 5
// 1 2 1 2 3
// 3
// 3 2 1
// 4
// 1 1 1 1

// Output:-

// 7
// 6
// 1

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll mod = 676767677;
    ll n;
    cin>>n;
    vector<ll> arr(n);
    ll sum = 0;
    for(ll i=0; i<n; i++){
        ll el;
        cin>>el;
        arr[i] = el;
        if(el != 1) sum += el;
    }

    if(arr[n-1] == 1) sum++;
    cout<<sum % mod<<endl;
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