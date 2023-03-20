#include <iostream>
int s[1000001], x=1;
int main (void) {
    int n,p; std::cin >> n;
    for (int i=1; i<=n; i++) {
        std::cin >> p;
        while (p--) {
            s[x++]=i;
        }
    }
    std::cin >> n;
    while (n--) {
        std::cin >> p;
        std::cout << s[p] << '\n';
    }
    return 0;
}
