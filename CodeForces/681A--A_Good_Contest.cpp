#include <iostream>
int main (void) {
    int n, b, a;
    std::string s;
    std::cin >> n;
    while (n-- > 0) {
        std::cin >> s >> b >> a;
        if ( b>=2400 && a-b>0 ) {
            std::cout << "YES\n";
            return 0;
        }
    }
    std::cout << "NO\n";
    return 0;
}
