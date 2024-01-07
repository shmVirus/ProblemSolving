#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n; cin >> n;
    char ch;
    int p = 0, m = 0;
    for (int i=0; i<n; ++i) {
        cin >> ch;
        if (ch == '+') ++p;
        else ++m;
    }
    cout << abs(p-m) << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
