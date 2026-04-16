// InputCopy
// 4
// 7
// 1 2 3 4 5 6 7
// 1 2 3 4 5 6 7
// 3
// 67 67 67
// 67 67 67
// 6
// 8 10 10 12 12 14
// 8 10 10 12 12 14
// 8
// 2 4 8 16 32 64 128 256
// 2 4 8 16 32 64 128 256
// OutputCopy
// 6
// 0
// 2
// 1



#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        ll n;
        cin>>n;
        vector<ll> arr(n),b(n);
        for(auto &x : arr) cin>>x;
        for(auto &x : b) cin>>x;
        ll res = 0;

        for(ll i=1; i<n-1; i++){
           ll a = __gcd(arr[i], arr[i-1]);
           ll c = __gcd(arr[i], arr[i+1]);
           ll lcm = (a * c)/__gcd(a,c);
           if(lcm < arr[i]) res++;
        }
        
            if(__gcd(arr[0], arr[1]) < arr[0]) res++;
            if(__gcd(arr[n-1], arr[n-2]) < arr[n-1]) res++;
        
        cout<<res<<endl;
    }

    return 0;
}