#include <iostream>
int main (void) {
    int n, m, c;
    std::cin >> n;
    int mc=0, cc=0;
    while (n-- > 0) {
        std::cin >> m >> c;
        if (m>c) mc++;
        if (c>m) cc++;
    }
    (mc>cc)? (std::cout << "Mishka\n") : ((cc>mc)? (std::cout << "Chris\n") : (std::cout << "Friendship is magic!^^\n"));
    return 0;
}
