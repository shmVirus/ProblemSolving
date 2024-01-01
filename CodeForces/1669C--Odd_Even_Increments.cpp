#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n; cin >> n;
    int even1 = 0, even2 = 0, odd1 = 0, odd2 = 0;
    for(int i = 0, a; i < n; ++i) {
        cin >> a;
        if(i % 2 == 0) {
            if(a % 2 == 1) odd1 = 1;
            else even1 = 1;
        } else {
            if(a % 2 == 1) odd2 = 1;
            else even2 = 1;
        }
    }

    if(even1 && odd1) {
        cout << "NO\n";
    } else if(even2 && odd2) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
