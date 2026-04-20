// Input:-

// 3
// dcbe
// bedbaecfc
// babadab
// abacabadabacaba
// babaisyou
// flagiswin

// Output:-

// abcdcbeef
// aaaaabababccdab
// Impossible


#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(string s, string t){
    vector<int> alpha(26,0);
    for(auto ch : t) alpha[ch - 'a']++;
    for(auto ch : s){
        if(alpha[ch - 'a'] == 0){
            cout<<"Impossible"<<endl;
            return;
        }
        alpha[ch - 'a']--;
    }

    string temp = "";
    //int start = 0;
    for(auto ch : s){
        int end = ch - 'a';
        for(int i=0; i<end; i++){
            while(alpha[i]){
                temp += 'a' + i;
                alpha[i]--;
            }
        }
        temp += ch;
        //start = end + 1;
    }

    for(int i=0; i<26; i++){
        while(alpha[i]){
            temp += 'a' + i;
            alpha[i]--;
        }
    }

    cout<<temp<<endl;
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        string s,t;
        cin>>s;
        cin>>t;
        solve(s,t);
    }

    return 0;
}