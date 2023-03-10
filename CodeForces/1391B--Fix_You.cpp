#include <iostream>
int main (void) {
    int t, n, m; std::cin >> t; char a;
    while (t--) {
        std::cin >> n >> m; int s=0;
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                std::cin >> a;
                if (j+1==m && a=='R') s++;
                if (i+1==n && a=='D') s++;
            }
        }
        std::cout << s << std::endl;
    }
    return 0;
}
