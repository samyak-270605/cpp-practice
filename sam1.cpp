// Input:-

// 4
// 2 0
// 1 1
// 6 7
// 1 3

// Output:-

// 2
// 1 1
// 1
// 1 -1
// 1
// -1 1 -1 1 -1 1 -1 1 -1 1 -1 1 -1
// 2
// -1 -1 -1 1



#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        ll x,y;
        cin>>x>>y;

        vector<ll> arr;
        ll mod = 676767677;
        for(auto i=0; i<x; i++) arr.push_back(1);
        for(auto i=0; i<y; i++) arr.push_back(-1);
        ll diff = abs(x - y); // total sum of array
        if(diff == 0) cout<<1<<endl;
        else{
            int ans = 0;
            for(int i = 1; i*i <= diff; i++){
                if(diff % i == 0){
                    ans++;
                    if(diff != i*i) ans++;
                }
            }
            cout<<ans % mod<<endl;
        }

        for(auto i : arr) cout<<i<<" ";
        cout<<endl;
    }

    return 0;
}