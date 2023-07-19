#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    string s; cin >> s;
    int sum = 0, zeros = 0, evens = 0;

    for (char c : s) {
        int d = c-'0';
        sum += d;
        if (!d) zeros++;
        evens += d%2 == 0;
    }
    cout << (zeros == s.size() || zeros && sum%3 == 0 && evens > 1 ? "red" : "cyan") << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
