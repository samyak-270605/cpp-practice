// Input:-

// 3
// 3
// 1 4 2
// 4
// 3 4 6 3
// 10
// 6 1 4 3 1 3 2 5 4 4

// Output:-

// 0
// 1
// 4

#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(auto &x : arr) cin>>x;
        int incPos = 0;
        for(int i=1; i<n; i++){
            if(arr[i] == arr[i-1] || arr[i] == 7-arr[i-1]) incPos++, i++;
        }

        cout<<incPos<<endl;
    }
    return 0;
}