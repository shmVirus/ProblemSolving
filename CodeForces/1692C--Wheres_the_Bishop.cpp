#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    char g[9][9];
    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8; j++) {
            cin >> g[i][j];
        }
    }
    for (int i = 2; i <= 7; i++) {
        for (int j = 2; j <= 7; j++) {
            if (g[i][j] == '#' && g[i - 1][j - 1] == '#' && g[i - 1][j + 1] == '#' && g[i + 1][j - 1] == '#' && g[i + 1][j + 1] == '#') {
                cout << i << ' ' << j << nl;
                return;
            }
        }
    }
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
