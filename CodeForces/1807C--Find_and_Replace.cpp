// author: @shmVirus; Sabbir < sabbir@disroot.org >

#include <bits/stdc++.h>
using namespace std;
int main (void) {
    int t, n; cin >> t;
    string s;
    while (t--) {
        cin >> n;
        cin >> s;
        string od, ev;
        for (int i=0; s[i]!='\0'; i++) {
            if (i%2) od.push_back(s[i]);
            else ev.push_back(s[i]);
        }
        bool a=true;
        for (int i=0; i<od.size() && a; i++) {
            for (int j=0; j<ev.size() && a; j++) {
                if (od[i]==ev[j]) {
                    a=false;
                }
            }
        }
        cout << (a? "YES\n" : "NO\n");
    }
    return 0;
}
