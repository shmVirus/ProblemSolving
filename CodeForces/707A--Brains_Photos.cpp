#include <iostream>
int main (void) {
    int n, m;
    std::cin >> n >> m;
    char c;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            std::cin >> c;
            if ( c=='C' || c=='M' || c=='Y' ) {
                std::cout << "#Color\n";
                return 0;
            }
        }
    }
    std::cout << "#Black&White\n";
    return 0;
}
