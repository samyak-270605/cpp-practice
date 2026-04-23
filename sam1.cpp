// Input:-

// 3
// 12 1 2
// 123 1 2
// 123 2 5

// Output:-

// 0A2B
// 1A2B
// 1A2B

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string n_str;
    int j, k;
    cin >> n_str >> j >> k;

    // Get the j-th permutation
    string s1 = n_str;
    sort(s1.begin(), s1.end()); // Start from the smallest
    for(int i = 1; i < j; i++) next_permutation(s1.begin(), s1.end());

    // Get the k-th permutation
    string s2 = n_str;
    sort(s2.begin(), s2.end());
    for(int i = 1; i < k; i++) next_permutation(s2.begin(), s2.end());

    int a = 0, b = 0;
    //vector<int> count1(10, 0), count2(10, 0);

    for(int i = 0; i < s1.size(); i++) {
        if(s1[i] == s2[i]) {
            a++;
        } else {
            // Store counts for digits that don't match for "B" calculation
            // count1[s1[i] - '0']++;
            // count2[s2[i] - '0']++;
            b++;
        }
    }

    // "B" is the number of digits present in both but not at the same index
    // for(int i = 0; i < 10; i++) {
    //     b += min(count1[i], count2[i]);
    // }

    cout << a << "A" << b << "B" << endl;
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