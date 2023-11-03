#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    string s; cin >> s;
    bool zero = false, five = false;
    for(int i = s.size() - 1; i >= 0; --i){
        if(s[i] == '0'){
            if(zero){
                cout << s.size() - i - 2 << nl;
                return;
            }
            zero = true;
        } else if(s[i] == '5'){
            if(zero){
                cout << s.size() - i - 2 << nl;
                return;
            }
            five = true;
        } else if((s[i] == '2' || s[i] == '7') && five){
                cout << s.size() - i - 2 << nl;
                return;
        }
    }
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
