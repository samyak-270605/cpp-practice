// Input:-

// 5
// 5
// 1 2 3 4 5
// 4
// 4 3 2 1
// 4
// 4 5 2 3
// 8
// 4 5 4 5 4 5 4 5
// 9
// 9 9 8 2 4 4 3 5 3

// Output:-

// YES
// NO
// YES
// YES
// NO

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
        vector<ll> arr(n),copy;
        for(auto &x : arr) cin>>x;
        for(int i=0; i<n-1; i++){
            if(arr[i] > arr[i+1]){
                arr[i] -= arr[i+1];
                arr[i+1] = 0;
            }
            else{
                arr[i+1] -= arr[i];
                arr[i] = 0;
            }
        }

        copy = arr;
        sort(copy.begin(), copy.end());
        if(copy == arr) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}