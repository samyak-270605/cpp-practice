//2201A1
// Input:-

// 5
// 5
// 1 2 3 4 5
// 5
// 1 3 5 7 9
// 5
// 1 2 5 6 5
// 7
// 1 2 4 5 3 7 8
// 9
// 9 8 9 2 3 4 4 5 3

// Output:-

// 1
// 5
// 3
// 4
// 3

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin>>n;
    ll res = 0;
    ll root = -1;
    ll top = -1;

    for(auto i=0; i<n; i++){
        ll y;
        cin>>y;
        if(root <= y-1 && y-1 <= top){
            top = y;
        }
        else{
            root = y;
            top = y;
            res++;
        }
    }

    cout<<res<<endl;
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