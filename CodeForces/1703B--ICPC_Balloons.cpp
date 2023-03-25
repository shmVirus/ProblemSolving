// author: @shmVirus; Sabbir < sabbir@disroot.org >

#include <bits/stdc++.h>
using namespace std;
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void solution();

int main (void) {
    FastIO;
    solution();
    return 0;
}
void solution () {
    int t,n,x; cin >> t; string s;
    while (t--) {
        cin >> n >> s;
        int c[26]={0}, x = 0;
        for (int i=0; s[i]!='\0'; i++) {
            c[s[i]-'A']++;
        }
        for (int i=0; i<26; i++) {
            if (c[i]!=0) x += 2 + c[i]-1;
        }
        cout << x << '\n';
    }
}
