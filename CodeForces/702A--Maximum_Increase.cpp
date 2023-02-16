#include <iostream>
int main (void) {
    int n;
    int p, a;   // p -> previous of a
    std::cin >> n >> p;
    int s=1, os=1;  // os -> old longest
    for (int i=1; i<n; i++) {
        std::cin >> a;
        a>p ? s++ : s=1;
        s>os ? os=s : 0;
        p = a;
    }
    std::cout << os << std::endl;
    return 0;
}
