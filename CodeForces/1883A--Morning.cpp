#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    string s; cin >> s;
    int last = 1, ans = 0;
    for (int i=0; s[i]!='\0'; ++i) {
        int d = s[i]-48;
        if (d == 0) d = 10;
        if (d == last) ++ans;
        else  ans += abs(last-d)+1;
        last = d;
    }
    cout << ans << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
