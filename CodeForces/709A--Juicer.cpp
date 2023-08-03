#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 0

void solution () {
    int n, b, d; cin >> n >> b >> d;
    int juice = 0; int clean = 0;
    while(n--) {
        int a; cin >> a;
        if (a > b) continue;
        juice += a;
        if (juice > d) {
            clean += 1;
            juice = 0;
        }
    }
    cout << clean << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
