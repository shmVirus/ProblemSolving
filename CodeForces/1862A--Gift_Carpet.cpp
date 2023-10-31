#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n, m; cin >> n >> m;
    vector<string> carpet(n);
    for (int i=0; i<n; ++i) {
        cin >> carpet[i];
    }

    string vika = "vika"; int fnd = 0;
    for (int i = 0; i < m; ++i) {
        bool check = false;
        for (int j = 0; j < n; ++j) {
            if (carpet[j][i] == vika[fnd]) check = true;
        }
        if (check) {
            ++fnd;
            if (fnd == 4) break;
        }
    }

    cout << (fnd == 4 ? "YES" : "NO") << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
