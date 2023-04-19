// author: @shmVirus; Sabbir < sabbir@disroot.org >

#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl cout << "\n";
#define no cout << "NO\n";
#define yes cout << "YES\n";

void solution();

int main (void) {
    FastIO;
    solution();
    return 0;
}
void solution () {
    int t; cin >> t;
    while (t--) {
        int n,k, b=0,o=0, l[26]={0},u[26]={0};
        string s;
        cin >> n >> k >> s;
        for (int i=0; s[i]!='\0'; i++) {
            s[i]>=65 && s[i]<=90? l[s[i]-65]++ : u[s[i]-97]++;
        }
        for (int i=0; i<26; i++) {
            int x = min(l[i], u[i]);
            b += x;
            o += (max(l[i], u[i])-x)/2;
        }
        o>k? b+=k : b+=o;
        cout << b << '\n';
    }
}
