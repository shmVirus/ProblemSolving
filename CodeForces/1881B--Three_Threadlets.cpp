#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int a[3];
    for (int i = 0; i < 3; ++i) {
        cin >> a[i];
    }
    sort(a, a + 3);

    if (a[0] == a[1] && a[1] == a[2]) {
        cout << "YES" << endl;
    } else if (a[1] % a[0] == 0 && a[2] % a[0] == 0 && (a[1] / a[0] - 1) + (a[2] / a[0] - 1) <= 3) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}