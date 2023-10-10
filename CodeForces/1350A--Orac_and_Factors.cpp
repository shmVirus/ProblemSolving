#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n, k; cin >> n >> k;
    do {
        if ( n % 2 == 0 ) {
            n += 2 * k; break;
        }
        for (int i=3; i<=n; i+=2) {
            if ( n % i == 0 ) {
                n += i; break;
            }
        }
    } while (k--);
    cout << n << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
