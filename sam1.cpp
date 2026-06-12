// Input:-

// 7
// 1 2 3
// 2 3 2
// 7 3 10
// 17 3 3
// 10 10 2
// 4 7 2
// 1 6 2

// Output:-

// 1
// 1
// 2
// 3
// 0
// 2
// 2

#include<bits/stdc++.h>     
using namespace std;
using ll = long long;

void solve() {
    ll a,b,x;
    cin>>a>>b>>x;
    if(a == b){
        cout<<0<<endl;
        return;
    }

    if(abs(a - b) == 1){
        cout<<1<<endl;
        return;
    }

    if(x > a && x > b){
        cout<<2<<endl;
        return;
    }

    int cnt = 0;
    while(a != b){
        ll mx = max(a,b);
        ll mn = min(a,b);
        if(mx - mn < x){
            int diff = mx - mn;
            int num = mx/x;
            if(diff <= )
        }

        mx /= x;
        a = max(mx,mn);
        b = min(mx,mn);
        cnt++;
    }

    cout<<cnt<<endl;
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