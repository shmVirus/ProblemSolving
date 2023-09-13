#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    long long n, k; cin >> n >> k;
    long long res = 0;
    while(n > 0) {
        if(n % k == 0){
            n /= k;
            ++res;
        } else {
            long long rem = n % k;
            res += rem;
            n -= rem;
        }
    }
    cout << res << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
