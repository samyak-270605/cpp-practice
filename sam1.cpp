// Input:-

// 6
// 4
// 1 2 0 3 3 0 2 1
// 2
// 0 1 0 1
// 2
// 1 1 0 0
// 3
// 2 0 2 1 1 0
// 4
// 0 1 3 0 3 1 2 2
// 3
// 0 1 2 1 0 2

// Output:-

// 4
// 2
// 1
// 1
// 2
// 3

#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void findRes(unordered_set<int>& st, int n, int& mex){
    int i = 0;
    while(st.count(i)) i++;
    mex = max(mex, i);
}

void find(vector<int>& arr, int left, int right, int n, int& mex){
    unordered_set<int> st;
    while(left >= 0 && right < n && arr[left] == arr[right]){
        st.insert(arr[left]);
        left--;
        right++;
    }

    if(st.size() >= 2) findRes(st,n, mex);
    st.clear();
}

void solve() {
    int n;
    cin>>n;
    vector<int> arr(2*n);
    int mex = 1;
    for(auto &x : arr) cin>>x;
    for(int i=0; i<2*n; i++){
            find(arr, i,i, 2*n, mex);
            if(i > 0 && arr[i] == arr[i-1]) find(arr, i-1, i, 2*n, mex);
    }

    cout<<mex<<endl;
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