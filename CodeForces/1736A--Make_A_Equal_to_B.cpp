#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n, ans=0, sum=0; cin >> n;
    vector<int> a(n), b(n);
    for(auto &it:a){
        cin >> it; sum += it;
    }
    for(auto &it:b){
        cin >> it; sum -= it;
    }
    for(int i=0; i<n; ++i){
        ans += (a[i] ^ b[i]);
    }
    ans = min(ans, 1+abs(sum));
    cout << ans << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
