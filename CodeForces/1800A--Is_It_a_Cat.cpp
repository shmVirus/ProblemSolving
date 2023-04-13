// author: @shmVirus; Sabbir < sabbir@disroot.org >

#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl cout << "\n";
#define no cout << "NO\n";
#define yes cout << "YES\n";

void solution();

int main (void) {
    FastIO;
    solution();
    return 0;
}
void solution () {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        transform(s.begin(), s.end(), s.begin(), [] (char c) {
            return tolower(c);
        });
        s.erase(unique(s.begin(), s.end()), s.end());
        cout << (s == "meow" ? "YES" : "NO") << "\n";
    }
}
