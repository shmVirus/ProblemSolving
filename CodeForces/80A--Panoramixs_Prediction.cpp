#include <iostream>
int main (void) {
    int n, m;
    std:: cin >> n >> m;
    bool sp = true;
    for (int i=n+1; i<=m; i++) {
        bool p = true;
        for (int j=2; j<=(i+1)/2; j++) {
            if (i%j==0) {
                p = false;
                break;
            }
        }
        if ( (p && i<m) || (!p &&i==m) ) {
            sp = false;
            break;
        }
    }
    if (sp) std:: cout << "YES\n";
    else std:: cout << "NO\n";
    return 0;
}
